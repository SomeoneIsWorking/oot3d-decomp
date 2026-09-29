// OoT3D decomp @ 00308eb0  name=FUN_00308eb0  size=88

void FUN_00308eb0(int param_1,uint param_2)

{
  int iVar1;

  FUN_0030a0e8();
  for (iVar1 = *(int *)(param_1 + 0xc4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x138)) {
    if (*(char *)(iVar1 + 0xc6) != '\0') {
      if (-1 < (int)param_2) {
        FUN_0030a074(iVar1 + 0x90,param_2 & 0xff);
      }
      FUN_0030a030(iVar1);
    }
  }
  return;
}
