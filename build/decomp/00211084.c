// OoT3D decomp @ 00211084  name=FUN_00211084  size=92

void FUN_00211084(int param_1)

{
  int iVar1;
  bool bVar2;

  bVar2 = false;
  if (*(float *)(param_1 + 0x9e4) == DAT_002110e0) {
    bVar2 = *(float *)(param_1 + 0x9e8) == DAT_002110e0;
  }
  iVar1 = param_1 + 0x800;
  if (!bVar2) {
    iVar1 = param_1 + 0x9a4;
  }
  FUN_0035021c(*(undefined4 *)(param_1 + 0xa00),iVar1);
  FUN_003508b8(param_1,*(undefined4 *)(param_1 + 0x9fc),0);
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4);
}
