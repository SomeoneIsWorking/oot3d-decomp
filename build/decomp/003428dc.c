// OoT3D decomp @ 003428dc  name=FUN_003428dc  size=52

void FUN_003428dc(int param_1,int param_2)

{
  short sVar1;
  int iVar2;

  iVar2 = *(int *)(param_2 + 0x5b8c) + (uint)(*(ushort *)(param_1 + 0x1c) >> 10) * 0x10;
  sVar1 = *(short *)(iVar2 + 4);
  if (sVar1 < 0) {
    *(short *)(iVar2 + 4) = -sVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4);
}
