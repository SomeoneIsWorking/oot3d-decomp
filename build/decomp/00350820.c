// OoT3D decomp @ 00350820  name=FUN_00350820  size=64

int FUN_00350820(int param_1,code *param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1;
  if (param_2 != (code *)0x0) {
    while (bVar2 = param_4 != 0, param_4 = param_4 + -1, bVar2) {
      (*param_2)(iVar1);
      iVar1 = iVar1 + param_3;
    }
  }
  return param_1;
}

