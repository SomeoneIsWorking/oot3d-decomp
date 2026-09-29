// OoT3D decomp @ 0020d280  name=FUN_0020d280  size=136

void FUN_0020d280(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;

  FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0x494));
  FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0x4b0));
  uVar1 = 0;
  do {
    iVar2 = param_2 + uVar1 * 2;
    *(undefined2 *)(iVar2 + 0x3202) = 0;
    uVar1 = uVar1 + 1 & 0xff;
    *(undefined2 *)(iVar2 + 0x3208) = 0;
    *(undefined2 *)(iVar2 + 0x31fc) = 0;
  } while (uVar1 < 3);
  FUN_0033579c(param_1 + 0x360);
  if (0xfffd < *(ushort *)(param_1 + 0x1c) || *(ushort *)(param_1 + 0x1c) == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00350be0(param_1 + 0x1a4);
  }
  return;
}
