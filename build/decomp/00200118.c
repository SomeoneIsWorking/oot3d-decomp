// OoT3D decomp @ 00200118  name=FUN_00200118  size=856

undefined4 FUN_00200118(short *param_1)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  undefined4 *puVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  undefined4 uVar12;
  short *psVar13;
  undefined4 uVar14;
  int iVar15;
  float fVar16;
  short *apsStack_8c [5];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [20];
  undefined4 local_30;

  psVar10 = param_1 + 0x46;
  psVar9 = param_1 + 0x40;
  psVar8 = param_1 + 0x52;
  psVar11 = param_1 + 0xa2;
  local_30 = *(undefined4 *)(param_1 + 0xb6);
  uVar14 = *(undefined4 *)(param_1 + 0xb8);
  uVar1 = param_1[0xba];
  psVar13 = param_1 + 2;
  sVar2 = **(short **)(*(int *)(DAT_00200470 + param_1[0xc5] * 8 + 4) + param_1[0xc6] * 8 + 4);
  *param_1 = sVar2;
  uVar3 = param_1[0xba];
  if ((uVar3 & 2) == 0) {
    if ((uVar3 & 4) == 0) {
      if ((uVar3 & 8) == 0) goto LAB_002001ac;
      sVar5 = 2;
    }
    else {
      sVar5 = 0x65;
    }
    param_1[0xd3] = sVar5;
  }
  else {
    param_1[0xd3] = 100;
  }
LAB_002001ac:
  fVar4 = DAT_00200478;
  *(int *)(DAT_00200474 + 0x14) = (int)sVar2;
  sVar2 = param_1[0xd3];
  if (sVar2 == 0) {
    *(undefined4 *)psVar13 = DAT_00200484;
    param_1[4] = 0;
    param_1[0xd3] = 1;
  }
  else if (sVar2 != 1) {
    if (sVar2 == 100) {
      puVar7 = *(undefined4 **)(param_1 + 0xb6);
      local_6c = puVar7[4];
      local_68 = puVar7[5];
      local_64 = puVar7[6];
      local_78 = *puVar7;
      local_74 = puVar7[1];
      local_70 = puVar7[2];
      fVar16 = (float)puVar7[3];
      *(undefined4 *)psVar11 = puVar7[7];
      if ((uVar1 & 1) == 0) {
        *(undefined4 *)psVar8 = local_78;
        *(undefined4 *)(param_1 + 0x54) = local_74;
        *(undefined4 *)(param_1 + 0x56) = local_70;
        *(undefined4 *)psVar9 = local_6c;
        *(undefined4 *)(param_1 + 0x42) = local_68;
        *(undefined4 *)(param_1 + 0x44) = local_64;
      }
      else {
        iVar15 = *(int *)(param_1 + 0x6c);
        if (iVar15 != 0) {
          puVar7 = *(undefined4 **)(iVar15 + 0x13c);
        }
        if (iVar15 != 0 && puVar7 != (undefined4 *)0x0) {
          FUN_00342ec0(apsStack_8c);
          FUN_00371738(auStack_44,apsStack_8c,0x12);
          FUN_00338a2c(auStack_44,&local_78,psVar8);
          FUN_00338a2c(auStack_44,&local_6c,psVar9);
        }
      }
      *(undefined4 *)psVar10 = *(undefined4 *)psVar8;
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_1 + 0x56);
      param_1[0xd1] = (short)(int)(fVar16 * fVar4);
      uVar14 = FUN_00338a90(psVar9,psVar10);
      *(undefined4 *)(param_1 + 0x92) = uVar14;
      return 1;
    }
    if (sVar2 != 0x65) {
      return 1;
    }
    iVar6 = *(int *)(param_1 + 0xb6);
    uVar14 = *(undefined4 *)(iVar6 + 0x90);
    uVar12 = *(undefined4 *)(iVar6 + 0x94);
    *(undefined4 *)psVar10 = *(undefined4 *)(iVar6 + 0x8c);
    *(undefined4 *)(param_1 + 0x48) = uVar14;
    *(undefined4 *)(param_1 + 0x4a) = uVar12;
    iVar15 = DAT_0020047c;
    uVar14 = *(undefined4 *)(iVar6 + 0x84);
    uVar12 = *(undefined4 *)(iVar6 + 0x88);
    *(undefined4 *)psVar9 = *(undefined4 *)(iVar6 + 0x80);
    *(undefined4 *)(param_1 + 0x42) = uVar14;
    *(undefined4 *)(param_1 + 0x44) = uVar12;
    *(undefined4 *)psVar11 = *(undefined4 *)(iVar6 + 0x144);
    param_1[0xd1] = *(short *)(iVar15 + iVar6);
    *(undefined1 *)(param_1 + 0xdb) = 0;
    iVar15 = *(int *)(iVar6 + 0xd0);
    *(int *)(param_1 + 0x68) = iVar15;
    if (iVar15 < 0x34000001) {
      iVar15 = DAT_00200480;
    }
    *(int *)(param_1 + 0x68) = iVar15;
    return 1;
  }
  apsStack_8c[0] = psVar13;
  iVar15 = FUN_00342ed8(&local_50,&local_60,psVar11,uVar14,param_1 + 4);
  if (iVar15 == 0) {
    apsStack_8c[0] = psVar13;
    iVar6 = FUN_00342ed8(&local_5c,&local_60,psVar11,local_30,param_1 + 4);
    iVar15 = 0;
    if (iVar6 == 0) goto LAB_002002ac;
  }
  iVar15 = (ushort)param_1[0xd3] + 1;
  param_1[0xd3] = (short)iVar15;
LAB_002002ac:
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)psVar8 = local_50;
    *(undefined4 *)(param_1 + 0x54) = local_4c;
    *(undefined4 *)(param_1 + 0x56) = local_48;
    *(undefined4 *)psVar9 = local_5c;
    *(undefined4 *)(param_1 + 0x42) = local_58;
    *(undefined4 *)(param_1 + 0x44) = local_54;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x6c);
    if (iVar6 != 0) {
      iVar15 = *(int *)(iVar6 + 0x13c);
    }
    if (iVar6 != 0 && iVar15 != 0) {
      FUN_00342ec0(&local_74);
      FUN_00371738(auStack_44,&local_74,0x12);
      FUN_00338a2c(auStack_44,&local_50,psVar8);
      FUN_00338a2c(auStack_44,&local_5c,psVar9);
    }
  }
  *(undefined4 *)psVar10 = *(undefined4 *)psVar8;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_1 + 0x56);
  param_1[0xd1] = (short)(int)(local_60 * fVar4);
  uVar14 = FUN_00338a90(psVar9,psVar10);
  *(undefined4 *)(param_1 + 0x92) = uVar14;
  return 1;
}
