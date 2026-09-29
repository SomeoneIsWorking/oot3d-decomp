// OoT3D decomp @ 0040a674  name=FUN_0040a674  size=200

void FUN_0040a674(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_114 [256];

  uVar3 = FUN_00306994();
  cVar1 = *(char *)(param_1 + 4);
  if (((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x06') && cVar1 != '\a') {
    if (cVar1 == '\x01') {
      *(undefined4 *)(param_1 + 8) = param_2;
      uVar2 = DAT_0040a73c;
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
      FUN_00306938(auStack_114,0x80,uVar2,param_2);
      FUN_00306808(uVar3,auStack_114);
      *(undefined1 *)(param_1 + 4) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = param_2;
      uVar3 = FUN_00306994();
      cVar1 = *(char *)(param_1 + 4);
      if ((((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x06') && cVar1 != '\a') &&
          cVar1 != '\x01') {
        (**(code **)(**(int **)(param_1 + 0x10) + 4))();
        FUN_003067e4(uVar3);
        *(undefined1 *)(param_1 + 4) = 6;
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
        return;
      }
    }
  }
  return;
}
