# Title

Description

[`project`](https://khantorot.github.io/*)

### Author

Khantoro: [`khantorot.github.io`](https://khantorot.github.io)

### Contact

Email: [`khantorot@gmail.com`](mailto:khantorot@gmail.com)

## Usage

### Installation

```bash
git clone https://github.com/khantorot/*.git
```

### Environment

- Core Tools: [node](https://nodejs.org), [npm](https://npmjs.com), [vite](https://vitejs.dev)
- Integrations: [vituum](https://vituum.dev), [postcss](https://postcss.org), [posthtml](https://posthtml.org)
- Code quality: [prettier](https://prettier.io), [eslint](https://eslint.org), [stylelint](https://stylelint.io)
- Utilities: [simple-git-hooks](https://github.com/toplenboren/simple-git-hooks), [lint-staged](https://github.com/lint-staged/lint-staged)

### Commands

| Command           | Action                                                   |
| ----------------- | -------------------------------------------------------- |
| `npm install`     | Installs dependencies                                    |
| `npm run dev`     | Starts local dev server                                  |
| `npm run build`   | Build production site                                    |
| `npm run preview` | Preview build locally, before deploying                  |
| `npm run prepare` | Prepare `simple-git-hooks`, `lint-staged`                |
| `npm run fix`     | Format, lint code with `prettier`, `eslint`, `stylelint` |
| `npm run clean`   | Remove `dist`, `node_modules`                            |

### Structure

```
┌─ dist
├─ node_modules
│
│─ public
│  ├─ doc
│  └─ img
│     ├─ common
│     └─ icon
│
├─ src
│  ├─ assets
│  │  ├─ css
│  │  └─ js
│  │
│  ├─ components
│  ├─ layouts
│  └─ pages
│
└─ vite.config.js
```

## Setup

```bash
npm create vite@latest
```

### Node

```bash
node -v > .nvmrc
```

```bash
nvm use
```

### Integrations

```bash
npm i -D vituum @vituum/vite-plugin-postcss @vituum/vite-plugin-posthtml
```

### Code quality

```bash
npm i -D prettier
```

```bash
npm i -D eslint eslint-config-standard eslint-config-prettier
```

```bash
npm i -D stylelint stylelint-config-standard stylelint-config-recess-order
```

### Utilities

```bash
npm i -D lint-staged simple-git-hooks
```
