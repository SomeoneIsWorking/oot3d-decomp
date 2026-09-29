// OoT3D decomp @ 002d8408  name=FUN_002d8408  size=188

void FUN_002d8408(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;

  if ((*(ushort *)((int)param_2 + 2) & 1) == 0) {
    *(undefined2 *)param_2 = 0;
    param_2[0x33] = 0;
    param_2[0x70] = 0;
    param_2[0xa3] = 0;
    param_2[0xa7] = 0;
    puVar1 = param_2;
    while (puVar1 = puVar1 + 1, puVar1 < param_2 + 0x33) {
      *puVar1 = 0;
    }
    for (puVar1 = param_2 + 0x34; puVar1 < param_2 + 0x70; puVar1 = puVar1 + 1) {
      *puVar1 = 0;
    }
    for (puVar1 = param_2 + 0x71; puVar1 < param_2 + 0xa3; puVar1 = puVar1 + 1) {
      *puVar1 = 0;
    }
    for (puVar1 = param_2 + 0xa4; puVar1 < param_2 + 0xa7; puVar1 = puVar1 + 1) {
      *puVar1 = 0;
    }
    uVar2 = 0;
    do {
      uVar3 = uVar2 + 2;
      param_2[uVar2 * 2 + 0xa8] = 0;
      param_2[uVar2 * 2 + 0xa9] = 0;
      param_2[uVar2 * 2 + 0xaa] = 0;
      param_2[uVar2 * 2 + 0xab] = 0;
      uVar2 = uVar3;
    } while (uVar3 < 0x10);
  }
  return;
}
