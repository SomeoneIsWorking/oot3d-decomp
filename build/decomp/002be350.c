// OoT3D decomp @ 002be350  name=FUN_002be350  size=76

void FUN_002be350(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_2 + 0x1ac);
  if (-1 < cVar1) {
    *(undefined *)(param_2 + 0x1ac) = *(undefined *)(param_2 + 0x1a9);
    FUN_0036055c(param_1,param_2);
    *(char *)(param_2 + 0x1ac) = cVar1;
    uVar2 = FUN_0033b548(param_2);
    FUN_0032c2c0(param_2,uVar2);
    return;
  }
  return;
}

