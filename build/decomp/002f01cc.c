// OoT3D decomp @ 002f01cc  name=FUN_002f01cc  size=532

void FUN_002f01cc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_64;
  undefined4 local_60 [5];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;

  uVar4 = DAT_002f0414;
  uVar3 = DAT_002f040c;
  uVar2 = DAT_002f0408;
  iVar1 = DAT_002f0400;
  uVar5 = *(undefined4 *)(DAT_002f0400 + 0x1c);
  switch(*(undefined4 *)(DAT_002f0400 + 0x30)) {
  case 0:
    FUN_002f7af4(DAT_002f0404,DAT_002f0418,uVar5);
    FUN_002f79b4(uVar3,uVar2,*(undefined4 *)(iVar1 + 0x1c));
    break;
  case 1:
    FUN_002f7af4(DAT_002f0404,DAT_002f041c,uVar5);
    FUN_002f79b4(uVar3,uVar2,*(undefined4 *)(iVar1 + 0x1c));
    break;
  case 2:
    FUN_002f7af4(DAT_002f0404,DAT_002f0420,uVar5);
    FUN_002f79b4(uVar3,uVar2,*(undefined4 *)(iVar1 + 0x1c));
    break;
  case 3:
    FUN_002f7af4(DAT_002f0404,DAT_002f0424,uVar5);
    FUN_002f79b4(uVar3,uVar2,*(undefined4 *)(iVar1 + 0x1c));
    break;
  case 4:
    FUN_002f7af4(DAT_002f0404,DAT_002f0428,uVar5);
    FUN_002f79b4(uVar3,uVar2,*(undefined4 *)(iVar1 + 0x1c));
    break;
  case 5:
    FUN_002f7af4(DAT_002f0410,DAT_002f042c,uVar5);
    FUN_002f79b4(uVar4,uVar4,*(undefined4 *)(iVar1 + 0x1c));
    break;
  case 6:
    FUN_002f7af4(DAT_002f0410,DAT_002f0430,uVar5);
    FUN_002f79b4(uVar4,uVar4,*(undefined4 *)(iVar1 + 0x1c));
    break;
  case 7:
    FUN_002f7af4(DAT_002f0410,DAT_002f0434,uVar5);
    FUN_002f79b4(uVar4,uVar4,*(undefined4 *)(iVar1 + 0x1c));
  }
  uVar4 = DAT_002f0440;
  uVar3 = DAT_002f043c;
  uVar2 = DAT_002f0438;
  if (*(int *)(iVar1 + 0x30) < 5) {
    iVar8 = 0;
    do {
      if (*(int *)(iVar1 + 0x30) == iVar8) {
        local_60[0] = uVar2;
        local_60[1] = uVar3;
        local_60[2] = uVar4;
        local_60[3] = uVar4;
        local_60[4] = uVar2;
        local_4c = uVar3;
        local_48 = uVar4;
        local_44 = uVar4;
        local_40 = uVar2;
        local_3c = uVar3;
        local_38 = uVar4;
        local_34 = uVar4;
        local_30 = uVar2;
        local_2c = uVar3;
        local_28 = uVar4;
        local_24 = uVar4;
      }
      else {
        puVar6 = &uStack_64;
        iVar7 = 8;
        do {
          puVar6[1] = uVar4;
          puVar6 = puVar6 + 2;
          iVar7 = iVar7 + -1;
          *puVar6 = uVar4;
        } while (iVar7 != 0);
      }
      FUN_002e7054(*(undefined4 *)(iVar1 + 0x14),local_60,1,iVar8 + 0x1a);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 5);
  }
  return;
}
