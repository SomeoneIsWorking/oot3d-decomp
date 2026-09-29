// OoT3D decomp @ 0035ff80  name=FUN_0035ff80  size=96

void FUN_0035ff80(int param_1)

{
  ushort uVar1;
  float fVar2;

  fVar2 = (float)FUN_003738a8(DAT_0035ffe0);
  if (DAT_0035ffe4 <= fVar2) {
    uVar1 = *(ushort *)(param_1 + 0x135c) & 0xffdf;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x135c) | 0x20;
  }
  *(ushort *)(param_1 + 0x135c) = uVar1 | 0x10;
  *(undefined2 *)(param_1 + 0x1352) = 0;
  *(undefined1 *)(param_1 + 0x1368) = 0;
  *(undefined1 *)(param_1 + 0x1369) = 4;
  *(undefined1 *)(param_1 + 0x1364) = 0;
  *(undefined2 *)(param_1 + 0x1366) = 0;
  *(undefined1 *)(param_1 + 0x1365) = 4;
  return;
}
