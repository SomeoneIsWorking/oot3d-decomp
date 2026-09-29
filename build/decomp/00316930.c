// OoT3D decomp @ 00316930  name=FUN_00316930  size=284

void FUN_00316930(undefined4 param_1,int param_2)

{
  int iVar1;

  iVar1 = 2;
  if (*(uint *)(param_2 + 0x7fd0) < *(uint *)(param_2 + 0x5bf4)) {
    iVar1 = 4;
    *(uint *)(param_2 + 0x7fd0) = *(uint *)(param_2 + 0x5bf4) + 0x1e;
  }
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
