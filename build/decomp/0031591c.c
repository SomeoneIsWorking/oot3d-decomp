// OoT3D decomp @ 0031591c  name=FUN_0031591c  size=68

void FUN_0031591c(short *param_1,short param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;

  sVar1 = *param_1;
  sVar2 = FUN_00368d94((int)(short)(param_2 - sVar1),param_3);
  iVar3 = (int)sVar2;
  if (param_4 < sVar2) {
    iVar3 = param_4;
  }
  if (iVar3 < -param_4) {
    iVar3 = (int)(short)-param_4;
  }
  *param_1 = sVar1 + (short)iVar3;
  return;
}
