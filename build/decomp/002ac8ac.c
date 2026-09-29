// OoT3D decomp @ 002ac8ac  name=FUN_002ac8ac  size=852

void FUN_002ac8ac(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;

  local_1c = 0;
  FUN_003532e8(param_1,0);
  uVar6 = 6;
  if (*(short *)(param_2 + 0x104) == 0x5c) {
    uVar6 = 7;
  }
  uVar6 = FUN_00372f38(param_1,param_2,param_1 + 0x1d0,0,param_1 + 0x1d4,4,param_1 + 0x1d8,3,
                       param_1 + 0x1dc,uVar6,0);
  uVar6 = FUN_00372f0c(uVar6,1);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1d0) + 0xc),uVar6);
  uVar6 = DAT_002acc14;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0xc) + 0x10) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0xc) + 0xc) = uVar6;
  iVar3 = FUN_0035010c(0x28);
  uVar6 = 0;
  if (iVar3 != 0) {
    uVar6 = FUN_003500c4();
  }
  *(undefined4 *)(param_1 + 0x1cc) = uVar6;
  FUN_0034ff2c(uVar6,8,2,1,2,0);
  FUN_0034fea8(*(undefined4 *)(param_1 + 0x1cc),(int)*(char *)(param_1 + 0x1e),param_2,1,
               DAT_002acc1c,DAT_002acc1c,DAT_002acc18,DAT_002acc18);
  local_4c = *DAT_002acc20;
  uStack_48 = DAT_002acc20[1];
  uStack_44 = DAT_002acc20[2];
  uStack_40 = DAT_002acc20[3];
  uStack_3c = DAT_002acc20[4];
  local_38 = DAT_002acc20[5];
  uStack_34 = DAT_002acc20[6];
  uStack_30 = DAT_002acc20[7];
  uStack_2c = DAT_002acc20[8];
  uStack_28 = DAT_002acc20[9];
  local_24 = DAT_002acc20[10];
  uStack_20 = DAT_002acc20[0xb];
  FUN_0034ea6c(*(undefined4 *)(*(int *)(param_1 + 0x1cc) + 8),&local_4c);
  iVar3 = DAT_002acc24;
  iVar4 = *(int *)(*(int *)(param_1 + 0x1cc) + 8);
  *(uint *)(iVar4 + 0x178) = *(uint *)(iVar4 + 0x178) | 1;
  *(char *)(param_1 + 0x1c3) = (char)((ushort)*(undefined2 *)(param_1 + 0x1c) >> 8);
  uVar2 = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(ushort *)(param_1 + 0x1c) = uVar2;
  switch(uVar2) {
  case 0:
  case 1:
  case 2:
    FUN_003510b0(param_1,DAT_002acc28);
    uVar6 = DAT_002acc2c;
    if (*(short *)(param_1 + 0x1c) == 0) {
      iVar4 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x1c3));
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x1bc) = DAT_002acc30;
      }
      else {
        *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + DAT_002acc34;
        *(undefined4 *)(param_1 + 0x1bc) = uVar6;
      }
      uVar6 = 1;
LAB_002acaf8:
      local_1c = FUN_00353fd4(param_1,param_2,uVar6);
    }
    else {
      if (*(short *)(param_1 + 0x1c) != 1) {
        uVar6 = 2;
        if (*(short *)(param_2 + 0x104) == 0x53) {
          *(undefined4 *)(param_1 + 0x1bc) = DAT_002acc38;
        }
        else {
          *(undefined4 *)(param_1 + 0x1bc) = DAT_002acc2c;
        }
        if (*(short *)(param_2 + 0x104) == 0x5c) {
          uVar6 = 3;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400000;
        }
        goto LAB_002acaf8;
      }
      *(undefined4 *)(param_1 + 0x1bc) = DAT_002acc2c;
      local_1c = FUN_00353fd4(param_1,param_2,0);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400000;
    }
    uVar6 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_1c);
    *(undefined4 *)(param_1 + 0x1a4) = uVar6;
    if ((*(ushort *)(iVar3 + 0xee) & 0x2000) != 0) {
      sVar1 = *(short *)(param_2 + 0x104);
      bVar7 = sVar1 == 0x53;
      if (bVar7) {
        sVar1 = *(short *)(param_1 + 0x1c);
      }
      if (bVar7 && sVar1 == 2) break;
    }
    uVar5 = *(uint *)(DAT_002acc3c + 4);
    bVar7 = uVar5 != 0;
    if (!bVar7) {
      uVar5 = (uint)*(ushort *)(param_1 + 0x1c);
    }
    if (bVar7 || uVar5 != 1) {
      return;
    }
    break;
  case 3:
    *(undefined1 *)(param_1 + 0x1c2) = 0;
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,7);
    uVar6 = DAT_002acc40;
    *(undefined4 *)(param_1 + 0x140) = DAT_002acc44;
    *(undefined4 *)(param_1 + 0x1bc) = uVar6;
    if ((*(ushort *)(iVar3 + 0xee) & 0x2000) == 0) {
      return;
    }
    break;
  case 4:
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002acc48 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x1c0) = (short)(int)(DAT_002acc4c / fVar8 + DAT_002acc50);
    *(undefined2 *)(param_1 + 0x1c8) = 0xffff;
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,7);
    uVar6 = DAT_002acc54;
    *(undefined4 *)(param_1 + 0x140) = DAT_002acc58;
    *(undefined4 *)(param_1 + 0x1bc) = uVar6;
    return;
  default:
    goto switchD_002aca18_default;
  }
  FUN_00374428(param_1);
switchD_002aca18_default:
  return;
}
