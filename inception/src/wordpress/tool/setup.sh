

#!/bin/sh
set -e

# Install wp-cli if not present
if [ ! -f "/usr/local/bin/wp" ]; then
    echo "Installing WP-CLI..."
    curl -O https://raw.githubusercontent.com/wp-cli/builds/gh-pages/phar/wp-cli.phar
    chmod +x wp-cli.phar
    mv wp-cli.phar /usr/local/bin/wp
fi

cd /var/www/html

# Only download WordPress if not already installed
if [ ! -f "wp-config.php" ]; then
    wp core download --allow-root
fi

echo "Starting php-fpm..."
exec php-fpm81 -F


