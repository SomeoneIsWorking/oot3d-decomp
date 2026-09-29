// OoT3D decomp @ 001d7358  name=FUN_001d7358  size=200

void FUN_001d7358(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_0035e3a4(param_1 + 0x8bc,0,(int)*(short *)(DAT_001d7420 + param_1));
  FUN_0036932c(*(undefined4 *)(param_1 + 0x224),1);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x224),2);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x224),3);
  cVar1 = *(char *)(param_1 + 0x8aa);
  if (cVar1 == '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x224);
    uVar3 = 2;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        FUN_0037266c(*(undefined4 *)(param_1 + 0x224),3);
      }
      goto LAB_001d73f0;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x224);
    uVar3 = 1;
  }
  FUN_0037266c(uVar2,uVar3);
LAB_001d73f0:
  FUN_0035e240(param_1 + 0x1fc,param_1 + 0x148,DAT_001d7428,DAT_001d7424,param_1,0);
  FUN_0035e330(param_1 + 0x8bc);
  return;
}
