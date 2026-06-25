// OoT3D decomp @ 002c50d4  name=FUN_002c50d4  size=156

int * FUN_002c50d4(undefined4 *param_1,int param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = DAT_002c5170;
  iVar1 = FUN_00313d58(param_1 + 3);
  piVar2 = (int *)FUN_00313cec(iVar1 + 0xc);
  piVar2[0xce] = param_2;
  piVar2[0xd0] = 0;
  *(char *)(piVar2 + -5) = param_3;
  *(undefined *)((int)piVar2 + -0x13) = 0;
  *(undefined *)((int)piVar2 + -0x12) = 0;
  piVar2[-4] = 0;
  if (param_3 != '\0') {
    iVar1 = (**(code **)(**DAT_002c5178 + 0xc))(*DAT_002c5178,0x3c,DAT_002c5174,0x46,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_002c36a4();
    }
    piVar2[-4] = iVar1;
    FUN_0030180c(iVar1,0x1000,0x20,0,0);
  }
  *piVar2 = (int)(piVar2 + -3);
  return piVar2 + -6;
}

