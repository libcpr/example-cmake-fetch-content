# CMake FetchContent Example
A minimal example for using cpr via FetchContent in CMake.

## Building

```bash
git clone https://github.com/libcpr/example-cmake-fetch-content.git
cd example-cmake-fetch-content
mkdir build
cd build
cmake ..
cmake --build .
```

## Executing

Form inside the `build/` directory run:

### Linux

```bash
./cpr_example
```

### Windows

```bash
.\Debug\cpr_example.exe
```


This then should produce the following output:
```
Status code: 200
Header:
        Access-Control-Allow-Origin:*
        Access-Control-Expose-Headers:ETag, Link, Location, Retry-After, X-GitHub-OTP, X-RateLimit-Limit, X-RateLimit-Remaining, X-RateLimit-Used, X-RateLimit-Resource, X-RateLimit-Reset, X-OAuth-Scopes, X-Accepted-OAuth-Scopes, X-Poll-Interval, X-GitHub-Media-Type, X-GitHub-SSO, X-GitHub-Request-Id, Deprecation, Sunset
        Cache-Control:public, max-age=60, s-maxage=60
        Content-Encoding:gzip
        Content-Security-Policy:default-src 'none'
        Content-Type:application/json; charset=utf-8
        Date:Tue, 28 Dec 2021 08:23:53 GMT
        ETag:W/"f333f7f20a0b31d88f6334ba12eba295727ce5c2ebd30e70cff180eb79dec1da"
        Last-Modified:Tue, 28 Dec 2021 06:42:45 GMT
        Link:<https://api.github.com/repositories/33157169/contributors?anon=true&key=value&page=2>; rel="next", <https://api.github.com/repositories/33157169/contributors?anon=true&key=value&page=4>; rel="last"
        Referrer-Policy:origin-when-cross-origin, strict-origin-when-cross-origin
        Server:GitHub.com
        Strict-Transport-Security:max-age=31536000; includeSubdomains; preload
        Transfer-Encoding:chunked
        Vary:Accept-Encoding, Accept, X-Requested-With
        X-Content-Type-Options:nosniff
        X-Frame-Options:deny
        X-GitHub-Media-Type:github.v3; format=json
        X-GitHub-Request-Id:C76A:E7F9:2A9A3D9:2B5717E:61CAC999
        X-RateLimit-Limit:60
        X-RateLimit-Remaining:56
        X-RateLimit-Reset:1640683077
        X-RateLimit-Resource:core
        X-RateLimit-Used:4
        X-XSS-Protection:0
Text: [
  {
    "login": "whoshuu",
    "id": 4143617,
    "node_id": "MDQ6VXNlcjQxNDM2MTc=",
    "avatar_url": "https://avatars.githubusercontent.com/u/4143617?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/whoshuu",
    "html_url": "https://github.com/whoshuu",
    "followers_url": "https://api.github.com/users/whoshuu/followers",
    "following_url": "https://api.github.com/users/whoshuu/following{/other_user}",
    "gists_url": "https://api.github.com/users/whoshuu/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/whoshuu/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/whoshuu/subscriptions",
    "organizations_url": "https://api.github.com/users/whoshuu/orgs",
    "repos_url": "https://api.github.com/users/whoshuu/repos",
    "events_url": "https://api.github.com/users/whoshuu/events{/privacy}",
    "received_events_url": "https://api.github.com/users/whoshuu/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 513
  },
  {
    "login": "COM8",
    "id": 11741404,
    "node_id": "MDQ6VXNlcjExNzQxNDA0",
    "avatar_url": "https://avatars.githubusercontent.com/u/11741404?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/COM8",
    "html_url": "https://github.com/COM8",
    "followers_url": "https://api.github.com/users/COM8/followers",
    "following_url": "https://api.github.com/users/COM8/following{/other_user}",
    "gists_url": "https://api.github.com/users/COM8/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/COM8/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/COM8/subscriptions",
    "organizations_url": "https://api.github.com/users/COM8/orgs",
    "repos_url": "https://api.github.com/users/COM8/repos",
    "events_url": "https://api.github.com/users/COM8/events{/privacy}",
    "received_events_url": "https://api.github.com/users/COM8/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 170
  },
  {
    "login": "KingKili",
    "id": 12865310,
    "node_id": "MDQ6VXNlcjEyODY1MzEw",
    "avatar_url": "https://avatars.githubusercontent.com/u/12865310?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/KingKili",
    "html_url": "https://github.com/KingKili",
    "followers_url": "https://api.github.com/users/KingKili/followers",
    "following_url": "https://api.github.com/users/KingKili/following{/other_user}",
    "gists_url": "https://api.github.com/users/KingKili/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/KingKili/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/KingKili/subscriptions",
    "organizations_url": "https://api.github.com/users/KingKili/orgs",
    "repos_url": "https://api.github.com/users/KingKili/repos",
    "events_url": "https://api.github.com/users/KingKili/events{/privacy}",
    "received_events_url": "https://api.github.com/users/KingKili/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 42
  },
  {
    "login": "tstack",
    "id": 107532,
    "node_id": "MDQ6VXNlcjEwNzUzMg==",
    "avatar_url": "https://avatars.githubusercontent.com/u/107532?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/tstack",
    "html_url": "https://github.com/tstack",
    "followers_url": "https://api.github.com/users/tstack/followers",
    "following_url": "https://api.github.com/users/tstack/following{/other_user}",
    "gists_url": "https://api.github.com/users/tstack/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/tstack/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/tstack/subscriptions",
    "organizations_url": "https://api.github.com/users/tstack/orgs",
    "repos_url": "https://api.github.com/users/tstack/repos",
    "events_url": "https://api.github.com/users/tstack/events{/privacy}",
    "received_events_url": "https://api.github.com/users/tstack/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 16
  },
  {
    "login": "vittorioromeo",
    "id": 918661,
    "node_id": "MDQ6VXNlcjkxODY2MQ==",
    "avatar_url": "https://avatars.githubusercontent.com/u/918661?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/vittorioromeo",
    "html_url": "https://github.com/vittorioromeo",
    "followers_url": "https://api.github.com/users/vittorioromeo/followers",
    "following_url": "https://api.github.com/users/vittorioromeo/following{/other_user}",
    "gists_url": "https://api.github.com/users/vittorioromeo/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/vittorioromeo/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/vittorioromeo/subscriptions",
    "organizations_url": "https://api.github.com/users/vittorioromeo/orgs",
    "repos_url": "https://api.github.com/users/vittorioromeo/repos",
    "events_url": "https://api.github.com/users/vittorioromeo/events{/privacy}",
    "received_events_url": "https://api.github.com/users/vittorioromeo/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 13
  },
  {
    "email": "don@slack-corp.com",
    "name": "Don Goodman-Wilson",
    "type": "Anonymous",
    "contributions": 9
  },
  {
    "login": "edmBernard",
    "id": 19322406,
    "node_id": "MDQ6VXNlcjE5MzIyNDA2",
    "avatar_url": "https://avatars.githubusercontent.com/u/19322406?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/edmBernard",
    "html_url": "https://github.com/edmBernard",
    "followers_url": "https://api.github.com/users/edmBernard/followers",
    "following_url": "https://api.github.com/users/edmBernard/following{/other_user}",
    "gists_url": "https://api.github.com/users/edmBernard/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/edmBernard/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/edmBernard/subscriptions",
    "organizations_url": "https://api.github.com/users/edmBernard/orgs",
    "repos_url": "https://api.github.com/users/edmBernard/repos",
    "events_url": "https://api.github.com/users/edmBernard/events{/privacy}",
    "received_events_url": "https://api.github.com/users/edmBernard/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 9
  },
  {
    "login": "smiley",
    "id": 354181,
    "node_id": "MDQ6VXNlcjM1NDE4MQ==",
    "avatar_url": "https://avatars.githubusercontent.com/u/354181?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/smiley",
    "html_url": "https://github.com/smiley",
    "followers_url": "https://api.github.com/users/smiley/followers",
    "following_url": "https://api.github.com/users/smiley/following{/other_user}",
    "gists_url": "https://api.github.com/users/smiley/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/smiley/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/smiley/subscriptions",
    "organizations_url": "https://api.github.com/users/smiley/orgs",
    "repos_url": "https://api.github.com/users/smiley/repos",
    "events_url": "https://api.github.com/users/smiley/events{/privacy}",
    "received_events_url": "https://api.github.com/users/smiley/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 8
  },
  {
    "login": "FelixVanorder",
    "id": 16056023,
    "node_id": "MDQ6VXNlcjE2MDU2MDIz",
    "avatar_url": "https://avatars.githubusercontent.com/u/16056023?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/FelixVanorder",
    "html_url": "https://github.com/FelixVanorder",
    "followers_url": "https://api.github.com/users/FelixVanorder/followers",
    "following_url": "https://api.github.com/users/FelixVanorder/following{/other_user}",
    "gists_url": "https://api.github.com/users/FelixVanorder/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/FelixVanorder/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/FelixVanorder/subscriptions",
    "organizations_url": "https://api.github.com/users/FelixVanorder/orgs",
    "repos_url": "https://api.github.com/users/FelixVanorder/repos",
    "events_url": "https://api.github.com/users/FelixVanorder/events{/privacy}",
    "received_events_url": "https://api.github.com/users/FelixVanorder/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 7
  },
  {
    "email": "jake@adiinsights.com",
    "name": "Jake Skinner",
    "type": "Anonymous",
    "contributions": 7
  },
  {
    "login": "thedrow",
    "id": 48936,
    "node_id": "MDQ6VXNlcjQ4OTM2",
    "avatar_url": "https://avatars.githubusercontent.com/u/48936?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/thedrow",
    "html_url": "https://github.com/thedrow",
    "followers_url": "https://api.github.com/users/thedrow/followers",
    "following_url": "https://api.github.com/users/thedrow/following{/other_user}",
    "gists_url": "https://api.github.com/users/thedrow/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/thedrow/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/thedrow/subscriptions",
    "organizations_url": "https://api.github.com/users/thedrow/orgs",
    "repos_url": "https://api.github.com/users/thedrow/repos",
    "events_url": "https://api.github.com/users/thedrow/events{/privacy}",
    "received_events_url": "https://api.github.com/users/thedrow/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 7
  },
  {
    "email": "fabian@w202-6o-v4.eduroam.dynamic.rbg.tum.de",
    "name": "Fabian Sauter",
    "type": "Anonymous",
    "contributions": 6
  },
  {
    "login": "jsouquie",
    "id": 11740993,
    "node_id": "MDQ6VXNlcjExNzQwOTkz",
    "avatar_url": "https://avatars.githubusercontent.com/u/11740993?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/jsouquie",
    "html_url": "https://github.com/jsouquie",
    "followers_url": "https://api.github.com/users/jsouquie/followers",
    "following_url": "https://api.github.com/users/jsouquie/following{/other_user}",
    "gists_url": "https://api.github.com/users/jsouquie/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/jsouquie/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/jsouquie/subscriptions",
    "organizations_url": "https://api.github.com/users/jsouquie/orgs",
    "repos_url": "https://api.github.com/users/jsouquie/repos",
    "events_url": "https://api.github.com/users/jsouquie/events{/privacy}",
    "received_events_url": "https://api.github.com/users/jsouquie/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 6
  },
  {
    "login": "bobjansen",
    "id": 311522,
    "node_id": "MDQ6VXNlcjMxMTUyMg==",
    "avatar_url": "https://avatars.githubusercontent.com/u/311522?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/bobjansen",
    "html_url": "https://github.com/bobjansen",
    "followers_url": "https://api.github.com/users/bobjansen/followers",
    "following_url": "https://api.github.com/users/bobjansen/following{/other_user}",
    "gists_url": "https://api.github.com/users/bobjansen/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/bobjansen/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/bobjansen/subscriptions",
    "organizations_url": "https://api.github.com/users/bobjansen/orgs",
    "repos_url": "https://api.github.com/users/bobjansen/repos",
    "events_url": "https://api.github.com/users/bobjansen/events{/privacy}",
    "received_events_url": "https://api.github.com/users/bobjansen/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 5
  },
  {
    "login": "dilshodm",
    "id": 284653,
    "node_id": "MDQ6VXNlcjI4NDY1Mw==",
    "avatar_url": "https://avatars.githubusercontent.com/u/284653?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/dilshodm",
    "html_url": "https://github.com/dilshodm",
    "followers_url": "https://api.github.com/users/dilshodm/followers",
    "following_url": "https://api.github.com/users/dilshodm/following{/other_user}",
    "gists_url": "https://api.github.com/users/dilshodm/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/dilshodm/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/dilshodm/subscriptions",
    "organizations_url": "https://api.github.com/users/dilshodm/orgs",
    "repos_url": "https://api.github.com/users/dilshodm/repos",
    "events_url": "https://api.github.com/users/dilshodm/events{/privacy}",
    "received_events_url": "https://api.github.com/users/dilshodm/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 5
  },
  {
    "email": "florian.dang@qhedgetech.com",
    "name": "Florian Dang",
    "type": "Anonymous",
    "contributions": 5
  },
  {
    "email": "abtjh5q@hmamail.com",
    "name": "fuchsch1234",
    "type": "Anonymous",
    "contributions": 5
  },
  {
    "login": "nyorain",
    "id": 13062371,
    "node_id": "MDQ6VXNlcjEzMDYyMzcx",
    "avatar_url": "https://avatars.githubusercontent.com/u/13062371?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/nyorain",
    "html_url": "https://github.com/nyorain",
    "followers_url": "https://api.github.com/users/nyorain/followers",
    "following_url": "https://api.github.com/users/nyorain/following{/other_user}",
    "gists_url": "https://api.github.com/users/nyorain/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/nyorain/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/nyorain/subscriptions",
    "organizations_url": "https://api.github.com/users/nyorain/orgs",
    "repos_url": "https://api.github.com/users/nyorain/repos",
    "events_url": "https://api.github.com/users/nyorain/events{/privacy}",
    "received_events_url": "https://api.github.com/users/nyorain/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 5
  },
  {
    "login": "zydxhs",
    "id": 15759657,
    "node_id": "MDQ6VXNlcjE1NzU5NjU3",
    "avatar_url": "https://avatars.githubusercontent.com/u/15759657?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/zydxhs",
    "html_url": "https://github.com/zydxhs",
    "followers_url": "https://api.github.com/users/zydxhs/followers",
    "following_url": "https://api.github.com/users/zydxhs/following{/other_user}",
    "gists_url": "https://api.github.com/users/zydxhs/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/zydxhs/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/zydxhs/subscriptions",
    "organizations_url": "https://api.github.com/users/zydxhs/orgs",
    "repos_url": "https://api.github.com/users/zydxhs/repos",
    "events_url": "https://api.github.com/users/zydxhs/events{/privacy}",
    "received_events_url": "https://api.github.com/users/zydxhs/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 5
  },
  {
    "login": "xloem",
    "id": 279585,
    "node_id": "MDQ6VXNlcjI3OTU4NQ==",
    "avatar_url": "https://avatars.githubusercontent.com/u/279585?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/xloem",
    "html_url": "https://github.com/xloem",
    "followers_url": "https://api.github.com/users/xloem/followers",
    "following_url": "https://api.github.com/users/xloem/following{/other_user}",
    "gists_url": "https://api.github.com/users/xloem/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/xloem/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/xloem/subscriptions",
    "organizations_url": "https://api.github.com/users/xloem/orgs",
    "repos_url": "https://api.github.com/users/xloem/repos",
    "events_url": "https://api.github.com/users/xloem/events{/privacy}",
    "received_events_url": "https://api.github.com/users/xloem/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 5
  },
  {
    "login": "nightlark",
    "id": 3969255,
    "node_id": "MDQ6VXNlcjM5NjkyNTU=",
    "avatar_url": "https://avatars.githubusercontent.com/u/3969255?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/nightlark",
    "html_url": "https://github.com/nightlark",
    "followers_url": "https://api.github.com/users/nightlark/followers",
    "following_url": "https://api.github.com/users/nightlark/following{/other_user}",
    "gists_url": "https://api.github.com/users/nightlark/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/nightlark/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/nightlark/subscriptions",
    "organizations_url": "https://api.github.com/users/nightlark/orgs",
    "repos_url": "https://api.github.com/users/nightlark/repos",
    "events_url": "https://api.github.com/users/nightlark/events{/privacy}",
    "received_events_url": "https://api.github.com/users/nightlark/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 5
  },
  {
    "login": "adam-nielsen",
    "id": 278772,
    "node_id": "MDQ6VXNlcjI3ODc3Mg==",
    "avatar_url": "https://avatars.githubusercontent.com/u/278772?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/adam-nielsen",
    "html_url": "https://github.com/adam-nielsen",
    "followers_url": "https://api.github.com/users/adam-nielsen/followers",
    "following_url": "https://api.github.com/users/adam-nielsen/following{/other_user}",
    "gists_url": "https://api.github.com/users/adam-nielsen/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/adam-nielsen/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/adam-nielsen/subscriptions",
    "organizations_url": "https://api.github.com/users/adam-nielsen/orgs",
    "repos_url": "https://api.github.com/users/adam-nielsen/repos",
    "events_url": "https://api.github.com/users/adam-nielsen/events{/privacy}",
    "received_events_url": "https://api.github.com/users/adam-nielsen/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 4
  },
  {
    "login": "waltronix",
    "id": 2383322,
    "node_id": "MDQ6VXNlcjIzODMzMjI=",
    "avatar_url": "https://avatars.githubusercontent.com/u/2383322?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/waltronix",
    "html_url": "https://github.com/waltronix",
    "followers_url": "https://api.github.com/users/waltronix/followers",
    "following_url": "https://api.github.com/users/waltronix/following{/other_user}",
    "gists_url": "https://api.github.com/users/waltronix/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/waltronix/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/waltronix/subscriptions",
    "organizations_url": "https://api.github.com/users/waltronix/orgs",
    "repos_url": "https://api.github.com/users/waltronix/repos",
    "events_url": "https://api.github.com/users/waltronix/events{/privacy}",
    "received_events_url": "https://api.github.com/users/waltronix/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 4
  },
  {
    "login": "alex-87",
    "id": 6656281,
    "node_id": "MDQ6VXNlcjY2NTYyODE=",
    "avatar_url": "https://avatars.githubusercontent.com/u/6656281?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/alex-87",
    "html_url": "https://github.com/alex-87",
    "followers_url": "https://api.github.com/users/alex-87/followers",
    "following_url": "https://api.github.com/users/alex-87/following{/other_user}",
    "gists_url": "https://api.github.com/users/alex-87/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/alex-87/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/alex-87/subscriptions",
    "organizations_url": "https://api.github.com/users/alex-87/orgs",
    "repos_url": "https://api.github.com/users/alex-87/repos",
    "events_url": "https://api.github.com/users/alex-87/events{/privacy}",
    "received_events_url": "https://api.github.com/users/alex-87/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 4
  },
  {
    "login": "diogo464",
    "id": 21161320,
    "node_id": "MDQ6VXNlcjIxMTYxMzIw",
    "avatar_url": "https://avatars.githubusercontent.com/u/21161320?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/diogo464",
    "html_url": "https://github.com/diogo464",
    "followers_url": "https://api.github.com/users/diogo464/followers",
    "following_url": "https://api.github.com/users/diogo464/following{/other_user}",
    "gists_url": "https://api.github.com/users/diogo464/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/diogo464/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/diogo464/subscriptions",
    "organizations_url": "https://api.github.com/users/diogo464/orgs",
    "repos_url": "https://api.github.com/users/diogo464/repos",
    "events_url": "https://api.github.com/users/diogo464/events{/privacy}",
    "received_events_url": "https://api.github.com/users/diogo464/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 3
  },
  {
    "login": "luca-schlecker",
    "id": 66110953,
    "node_id": "MDQ6VXNlcjY2MTEwOTUz",
    "avatar_url": "https://avatars.githubusercontent.com/u/66110953?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/luca-schlecker",
    "html_url": "https://github.com/luca-schlecker",
    "followers_url": "https://api.github.com/users/luca-schlecker/followers",
    "following_url": "https://api.github.com/users/luca-schlecker/following{/other_user}",
    "gists_url": "https://api.github.com/users/luca-schlecker/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/luca-schlecker/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/luca-schlecker/subscriptions",
    "organizations_url": "https://api.github.com/users/luca-schlecker/orgs",
    "repos_url": "https://api.github.com/users/luca-schlecker/repos",
    "events_url": "https://api.github.com/users/luca-schlecker/events{/privacy}",
    "received_events_url": "https://api.github.com/users/luca-schlecker/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 3
  },
  {
    "login": "ollien",
    "id": 977151,
    "node_id": "MDQ6VXNlcjk3NzE1MQ==",
    "avatar_url": "https://avatars.githubusercontent.com/u/977151?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/ollien",
    "html_url": "https://github.com/ollien",
    "followers_url": "https://api.github.com/users/ollien/followers",
    "following_url": "https://api.github.com/users/ollien/following{/other_user}",
    "gists_url": "https://api.github.com/users/ollien/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/ollien/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/ollien/subscriptions",
    "organizations_url": "https://api.github.com/users/ollien/orgs",
    "repos_url": "https://api.github.com/users/ollien/repos",
    "events_url": "https://api.github.com/users/ollien/events{/privacy}",
    "received_events_url": "https://api.github.com/users/ollien/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 3
  },
  {
    "email": "seanc@groupon.com",
    "name": "Sean Chittenden",
    "type": "Anonymous",
    "contributions": 3
  },
  {
    "email": "tstack@snaplogic.com",
    "name": "Timothy Stack",
    "type": "Anonymous",
    "contributions": 3
  },
  {
    "login": "noh4hss",
    "id": 10085170,
    "node_id": "MDQ6VXNlcjEwMDg1MTcw",
    "avatar_url": "https://avatars.githubusercontent.com/u/10085170?v=4",
    "gravatar_id": "",
    "url": "https://api.github.com/users/noh4hss",
    "html_url": "https://github.com/noh4hss",
    "followers_url": "https://api.github.com/users/noh4hss/followers",
    "following_url": "https://api.github.com/users/noh4hss/following{/other_user}",
    "gists_url": "https://api.github.com/users/noh4hss/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/noh4hss/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/noh4hss/subscriptions",
    "organizations_url": "https://api.github.com/users/noh4hss/orgs",
    "repos_url": "https://api.github.com/users/noh4hss/repos",
    "events_url": "https://api.github.com/users/noh4hss/events{/privacy}",
    "received_events_url": "https://api.github.com/users/noh4hss/received_events",
    "type": "User",
    "site_admin": false,
    "contributions": 3
  }
]
```
