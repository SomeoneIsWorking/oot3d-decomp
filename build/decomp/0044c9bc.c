// OoT3D decomp @ 0044c9bc  name=FUN_0044c9bc  size=260

undefined4 FUN_0044c9bc(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [40];

  if (param_4 == 0) {
    FUN_002e03ac(auStack_40);
    *(undefined1 *)(param_1 + 8) = 0;
    uVar2 = FUN_002df850(param_1,auStack_40,param_2,param_3 >> 1,param_5);
    *(undefined4 *)(param_1 + 4) = 0;
    cVar1 = *(char *)(param_1 + 0x25);
  }
  else {
    if (param_4 != 1) {
      return 0;
    }
    FUN_002e0f40(auStack_40);
    *(undefined1 *)(param_1 + 8) = 1;
    uVar2 = FUN_002e03e8(param_1,auStack_40,param_2,param_3,param_5);
    *(undefined4 *)(param_1 + 4) = 0;
    cVar1 = *(char *)(param_1 + 0x25);
  }
  if (cVar1 != '\0') {
    return 0;
  }
  return uVar2;
}
