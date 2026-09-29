// OoT3D decomp @ 002bd52c  name=FUN_002bd52c  size=384

uint FUN_002bd52c(uint *param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;

  if (0x40 < param_2) {
    FUN_00302bb8();
  }
  uVar2 = param_1[2];
  uVar5 = 0x40 - (0x40 - uVar2 & 7);
  if (param_2 <= uVar5) {
    while (uVar2 < param_2) {
      puVar3 = (undefined1 *)param_1[3];
      param_1[3] = (uint)(puVar3 + 1);
      uVar2 = param_1[2];
      uVar7 = FUN_002bc9ec(*puVar3,0,0x38 - uVar2);
      *param_1 = (uint)uVar7 | *param_1;
      param_1[1] = (uint)((ulonglong)uVar7 >> 0x20) | param_1[1];
      uVar2 = uVar2 + 8;
      param_1[2] = uVar2;
    }
    uVar4 = param_1[1];
    uVar2 = *param_1;
    uVar5 = FUN_002bc9c4(uVar2,uVar4,0x40 - param_2);
    uVar7 = FUN_002bc9ec(uVar2,uVar4,param_2);
    *(undefined8 *)param_1 = uVar7;
    param_1[2] = param_1[2] - param_2;
    return uVar5;
  }
  iVar6 = param_2 - uVar5;
  while (uVar2 < uVar5) {
    puVar3 = (undefined1 *)param_1[3];
    param_1[3] = (uint)(puVar3 + 1);
    uVar2 = param_1[2];
    uVar7 = FUN_002bc9ec(*puVar3,0,0x38 - uVar2);
    *param_1 = (uint)uVar7 | *param_1;
    param_1[1] = (uint)((ulonglong)uVar7 >> 0x20) | param_1[1];
    uVar2 = uVar2 + 8;
    param_1[2] = uVar2;
  }
  uVar7 = FUN_002bc9c4(*param_1,param_1[1],0x40 - uVar5);
  uVar2 = FUN_002bc9ec((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),iVar6);
  puVar3 = (undefined1 *)param_1[3];
  param_1[3] = (uint)(puVar3 + 1);
  uVar1 = *puVar3;
  uVar5 = FUN_002bc9c4(uVar1,0,8 - iVar6);
  uVar7 = FUN_002bc9ec(uVar1,0,iVar6 + 0x38);
  *(undefined8 *)param_1 = uVar7;
  param_1[2] = 8 - iVar6;
  return uVar2 | uVar5;
}
