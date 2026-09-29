// OoT3D decomp @ 0041ac34  name=FUN_0041ac34  size=44

void FUN_0041ac34(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;

  puVar2 = DAT_0041ac60 + 7;
  for (puVar1 = DAT_0041ac60; puVar1 < puVar2; puVar1 = puVar1 + 1) {
    FUN_00422294(*puVar1);
  }
  return;
}
