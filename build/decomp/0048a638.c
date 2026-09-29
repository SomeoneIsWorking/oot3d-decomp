// OoT3D decomp @ 0048a638  name=FUN_0048a638  size=44

void FUN_0048a638(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = DAT_0048a670;
  iVar1 = FUN_002c3130(DAT_0048a670,param_1);
  if (iVar1 != 0) {
    iVar2 = iVar1 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0030c9b8(iVar2,param_1 + 4);
}
