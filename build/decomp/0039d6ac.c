// OoT3D decomp @ 0039d6ac  name=FUN_0039d6ac  size=188

void FUN_0039d6ac(int param_1,int param_2)

{
  uint uVar1;
  ushort *puVar2;
  uint in_fpscr;
  undefined4 uVar3;

  FUN_0031a3dc();
  uVar3 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_0039d768;
  FUN_00376340(DAT_0039d774,DAT_0039d770,DAT_0039d76c,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar3;
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  puVar2 = (ushort *)0x0;
  uVar1 = FUN_0037571c(param_2);
  if (uVar1 != 0) {
    puVar2 = *(ushort **)(param_2 + 0x22e8);
  }
  if (puVar2 != (ushort *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  if (puVar2 != (ushort *)0x0 && uVar1 != 2) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,0xb);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(DAT_0039d780,DAT_0039d77c,uVar3,DAT_0039d778,param_1 + 0x1a4,DAT_0039d784,2);
    *(undefined4 *)(param_1 + 0xbbc) = 0x27;
  }
  return;
}
