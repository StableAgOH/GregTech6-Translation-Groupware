#include "DictLangResult.hpp"

DictLangResult::DictLangResult(shared_ptr<IGeneratorMeta> meta, pkvlist dict)
    : LangResult(meta), _dict(dict) {}