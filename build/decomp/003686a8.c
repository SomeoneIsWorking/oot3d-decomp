// OoT3D decomp @ 003686a8  name=FUN_003686a8  size=80

void FUN_003686a8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;

  iVar1 = DAT_003686f8;
  uVar2 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_003686f8 + param_2 * 0xc));
  iVar3 = iVar1 + param_2 * 0xc;
  *(char *)(param_1 + 0xa14) = (char)param_2;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00368700,DAT_003686fc,uVar2,*(undefined4 *)(iVar3 + 8),param_1 + 0x1a4,
               *(undefined4 *)(iVar1 + param_2 * 0xc),*(undefined1 *)(iVar3 + 4));
  return;
}
