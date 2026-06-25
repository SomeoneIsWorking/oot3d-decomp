// OoT3D decomp @ 00453050  name=FUN_00453050  size=200

undefined FUN_00453050(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = FUN_00339f0c();
  iVar3 = *(int *)(param_1 + 0x9c);
  if (iVar2 == 0) {
    if (iVar3 != 0) goto LAB_004530b0;
  }
  else {
    if (iVar3 != 0) {
      if (*(char *)(param_1 + 0x9a) == '\x01') {
        FUN_0030f0d4(iVar3,2);
      }
      return 0xff;
    }
    *(undefined *)(param_1 + 0x9a) = 1;
  }
  uVar1 = FUN_002dd3f4(param_2);
  *(undefined *)(param_1 + 0x83) = uVar1;
LAB_004530b0:
  if (*(int *)(param_1 + 0x84) == DAT_00453118) {
    uVar1 = FUN_002dd384(*(undefined4 *)(DAT_0045311c + 8),param_1 + 0x9c,param_2,param_3);
  }
  else {
    uVar1 = FUN_002dd384(param_1,param_1 + 0x9c,param_2,param_3);
  }
  iVar2 = FUN_00465444(param_2);
  bVar4 = iVar2 != 0;
  if (bVar4) {
    iVar2 = *(int *)(param_1 + 0x9c);
  }
  if (bVar4 && iVar2 != 0) {
    FUN_0030f0d4(iVar2,2);
  }
  return uVar1;
}

