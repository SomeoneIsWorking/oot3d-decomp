// OoT3D decomp @ 002d06a0  name=FUN_002d06a0  size=1144

uint FUN_002d06a0(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  int *piVar8;
  float fVar9;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_34;
  float local_30;

  fVar9 = DAT_002d0aa4;
  piVar7 = (int *)(param_1 + 0x160);
  piVar8 = (int *)(param_1 + 0x164);
  psVar6 = (short *)(param_1 + 0x168);
  local_34 = 0;
  uVar3 = (uint)*(short *)(param_1 + 0x194);
  if (((uVar3 & 2) == 0) ||
     ((*(uint *)(DAT_002d0aa0 + *(short *)(param_1 + 0x18a) * 8) & 0x40000000) != 0)) {
    return 0;
  }
  if ((uVar3 & 0x200) == 0) {
LAB_002d0760:
    if ((uint)(int)*(short *)(param_1 + 0x194) >> 0xf != 0) goto LAB_002d0930;
  }
  else {
    if ((*(uint *)(*(int *)(param_1 + 0xd8) + 0x1714) & 0x800) != 0) {
      FUN_00338864(param_1,0x24,6);
      uVar2 = *(ushort *)(param_1 + 0x194) | 0x8000;
LAB_002d075c:
      *(ushort *)(param_1 + 0x194) = uVar2;
      goto LAB_002d0760;
    }
    if (uVar3 >> 0xf != 0) {
      FUN_00338864(param_1,(int)(short)*piVar8,6);
      uVar2 = *(ushort *)(param_1 + 0x194) & 0x7fff;
      goto LAB_002d075c;
    }
  }
  FUN_00331764(&local_48,*(undefined4 *)(param_1 + 0xd8));
  local_30 = local_44;
  iVar4 = FUN_0033eeb8(local_48,local_40,*(int *)(param_1 + 0xd4),*(int *)(param_1 + 0xd4) + 0xa98,
                       &local_30,&local_4c);
  if ((iVar4 == 0) || ((*(uint *)(*(int *)(param_1 + 0xd8) + 0x1710) & 0x8000000) == 0)) {
    local_30 = fVar9;
    iVar4 = -1;
  }
  else {
    iVar4 = FUN_004ba2f8(*(int *)(param_1 + 0xd4) + 0xa98,local_4c);
    if ((iVar4 < 1) || (iVar5 = FUN_004ba358(*(int *)(param_1 + 0xd4) + 0xa98,local_4c), iVar5 == 0)
       ) {
      iVar4 = -2;
    }
  }
  if ((short)iVar4 == -2) {
    if ((*(ushort *)(param_1 + 0x194) & 0x200) == 0) {
      *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) | 0x200;
      *(float *)(param_1 + 0x15c) = local_30;
      *piVar7 = (int)*(short *)(param_1 + 400);
      *psVar6 = -1;
    }
    if (*(float *)(param_1 + 0x14c) != *(float *)(param_1 + 0xe0)) {
      uVar1 = *(undefined2 *)(param_1 + 0x18e);
      *(undefined2 *)(param_1 + 0x18e) = 0x32;
      FUN_00338864(param_1,5,2);
      *piVar8 = (int)*(short *)(param_1 + 0x18a);
      *(undefined2 *)(param_1 + 0x18e) = uVar1;
      *(undefined2 *)(param_1 + 400) = 0xfffe;
    }
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x194);
    if ((short)iVar4 == -1) {
      if ((uVar2 & 0x200) != 0) {
        *(ushort *)(param_1 + 0x194) = uVar2 & 0xfdff;
        uVar1 = *(undefined2 *)(param_1 + 0x18e);
        *(undefined2 *)(param_1 + 0x18e) = 0x32;
        if (*piVar7 < 0) {
          FUN_002c0998();
          *(undefined2 *)(param_1 + 400) = 0xffff;
        }
        else {
          FUN_003387a8(param_1);
        }
        *(undefined2 *)(param_1 + 0x18e) = uVar1;
      }
    }
    else {
      if ((uVar2 & 0x200) == 0) {
        *(ushort *)(param_1 + 0x194) = uVar2 | 0x200;
        *(float *)(param_1 + 0x15c) = local_30;
        *piVar7 = (int)*(short *)(param_1 + 400);
        *psVar6 = -1;
      }
      if (*(float *)(param_1 + 0x14c) != *(float *)(param_1 + 0xe0)) {
        uVar1 = *(undefined2 *)(param_1 + 0x18e);
        *(undefined2 *)(param_1 + 0x18e) = 0x32;
        FUN_003387a8(param_1);
        *piVar8 = (int)*(short *)(param_1 + 0x18a);
        *(undefined2 *)(param_1 + 0x18e) = uVar1;
      }
    }
  }
LAB_002d0930:
  FUN_00331764(&local_48,*(undefined4 *)(param_1 + 0xd8));
  local_4c = local_44;
  iVar4 = FUN_0033eeb8(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94),
                       *(int *)(param_1 + 0xd4),*(int *)(param_1 + 0xd4) + 0xa98,&local_4c,&local_50
                      );
  if ((iVar4 != 0) && (*(float *)(param_1 + 0x90) <= local_4c)) {
    local_34 = FUN_004ba2e8(*(int *)(param_1 + 0xd4) + 0xa98,local_50);
    fVar9 = local_4c;
  }
  local_30 = fVar9;
  if (fVar9 != -32000.0) {
    *(float *)(param_1 + 0x15c) = fVar9;
    if ((*(ushort *)(param_1 + 0x194) & 0x100) == 0) {
      *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) | 0x100;
      FUN_00316d74(*(undefined4 *)(param_1 + 0xd4),local_34);
      *(undefined2 *)(param_1 + 0x198) = 0x50;
    }
    FUN_0033ff0c(0x20);
    piVar7 = DAT_002d0aa8;
    if (*(short *)(*DAT_002d0aa8 + 0x2f6) != 0) {
      FUN_002c41e4((int)*psVar6);
      *psVar6 = -1;
      *(undefined2 *)(*piVar7 + 0x2f6) = 0;
    }
    if ((*psVar6 == -1) || (iVar4 = FUN_004b8d4c(), iVar4 == 10)) {
      iVar4 = FUN_0036f848(param_1,5);
      *psVar6 = (short)iVar4;
      if (iVar4 != 0) {
        FUN_0036f7c0(iVar4,DAT_002d0aac);
        local_50 = 0;
        FUN_0036f6b0((int)*psVar6,1,1,0xb4);
        FUN_0036f628((int)*psVar6,1000);
      }
    }
    if (*(short *)(param_1 + 0x198) < 1) {
      if (*(short *)(*(int *)(param_1 + 0xd4) + 0x104) == 0x49) {
        uVar3 = *(ushort *)(param_1 + 0x19a) | 0x10;
        *(short *)(param_1 + 0x19a) = (short)uVar3;
        return uVar3;
      }
      uVar3 = *(ushort *)(param_1 + 0x19a) | 2;
    }
    else {
      *(short *)(param_1 + 0x198) = *(short *)(param_1 + 0x198) + -1;
      uVar3 = *(ushort *)(param_1 + 0x19a) | 8;
    }
    *(short *)(param_1 + 0x19a) = (short)uVar3;
    return uVar3;
  }
  if ((*(ushort *)(param_1 + 0x194) & 0x100) != 0) {
    *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) & 0xfeff;
    FUN_004b8fc0(*(undefined4 *)(param_1 + 0xd4));
    if (*psVar6 != 0) {
      FUN_002c41e4();
    }
    *(undefined2 *)(param_1 + 0x198) = 0;
    *(undefined2 *)(param_1 + 0x19a) = 0;
  }
  uVar3 = FUN_0033ff0c(0);
  return uVar3;
}
