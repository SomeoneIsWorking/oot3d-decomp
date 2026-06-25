// OoT3D decomp @ 003ac640  name=FUN_003ac640  size=692

void FUN_003ac640(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint in_fpscr;
  undefined4 extraout_s0;
  
  iVar2 = FUN_00373074(param_2 + 0x3a58,*(undefined4 *)(param_1 + 0xd90));
  iVar3 = DAT_003ac948;
  if (iVar2 == 0) {
    return;
  }
  *(char *)(param_1 + 0x1e) = (char)*(undefined4 *)(param_1 + 0xd90);
  iVar3 = iVar3 + (*(ushort *)(param_1 + 0x1c) & 0x7f) * 0x18;
  uVar4 = *(undefined4 *)(iVar3 + 4);
  uVar6 = *(undefined4 *)(iVar3 + 8);
  uVar7 = *(undefined4 *)(iVar3 + 0xc);
  sVar1 = *(short *)(iVar3 + 0x10);
  FUN_00372f38(param_1,param_2,param_1 + 0xeac,uVar4,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,uVar4,uVar6,param_1 + 0x228,param_1 + 0x7d8,uVar7);
  if (-1 < sVar1) {
    FUN_0035c358(param_1 + 0xeb0,param_1 + 0x1a4,(int)sVar1,0xffffffff,0xffffffff);
  }
  FUN_00372d4c(DAT_003ac94c,DAT_003ac94c,param_1 + 0xbc,DAT_003ac950);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xd98,param_1,DAT_003ac954);
  uVar4 = DAT_003ac95c;
  iVar3 = DAT_003ac958 + (*(ushort *)(param_1 + 0x1c) & 0x7f) * 10;
  uVar6 = VectorSignedToFloat((int)*(short *)(iVar3 + 6),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0xdd8) = uVar6;
  uVar6 = VectorSignedToFloat((int)*(short *)(iVar3 + 8),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0xddc) = uVar6;
  FUN_00350318(param_1 + 0xa0,0,uVar4);
  FUN_003717ac(param_1 + 0x1a4,DAT_003ac960 + -0x288,
               *(undefined *)(DAT_003ac960 + (*(ushort *)(param_1 + 0x1c) & 0x7f) * 0x28 + 0x24));
  uVar4 = DAT_003ac964;
  if (*(short *)(param_2 + 0x104) == 0x1e || *(short *)(param_2 + 0x104) == 0x20) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
    *(undefined4 *)(param_1 + 0x100) = uVar4;
    if ((*(ushort *)(param_1 + 0x1c) & 0x7f) != 0) {
      bVar8 = (*(ushort *)(param_1 + 0x1c) & 0x7f) == 3;
      if (bVar8) {
        uVar4 = DAT_003ac968;
      }
      if (bVar8) {
        *(undefined4 *)(param_1 + 0x100) = uVar4;
      }
    }
  }
  if (*(short *)(param_2 + 0x104) == 0x2a) {
    *(undefined2 *)(DAT_003ac970 + param_1) = *(undefined2 *)(DAT_003ac96c + 0xf8);
  }
  puVar5 = (undefined4 *)(DAT_003ac974 + (*(ushort *)(param_1 + 0x1c) & 0x7f) * 0x1c);
  *(undefined4 *)(param_1 + 0xcc) = *puVar5;
  FUN_0037572c(puVar5[4],param_1);
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(puVar5 + 5);
  *(undefined4 *)(param_1 + 0xe9c) = puVar5[1];
  *(undefined4 *)(param_1 + 0xea0) = puVar5[2];
  *(undefined4 *)(param_1 + 0xea4) = puVar5[3];
  *(float *)(param_1 + 0xe94) = (float)puVar5[6] + *(float *)(param_1 + 0xdd8);
  uVar4 = FUN_00348ff0(param_2,(*(ushort *)(param_1 + 0x1c) & 0x780) >> 7,0xf);
  *(undefined4 *)(param_1 + 0xe18) = uVar4;
  uVar4 = DAT_003ac97c;
  switch(*(ushort *)(param_1 + 0x1c) & 0x7f) {
  case 0:
    uVar4 = DAT_003ac984;
    if (*(short *)(param_2 + 0x104) == 0x20) break;
  case 1:
  case 2:
  case 4:
  case 6:
  case 8:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    uVar4 = DAT_003ac988;
    break;
  case 3:
    bVar8 = *(int *)(param_1 + 0xe18) != 0;
    uVar6 = extraout_s0;
    if (bVar8) {
      uVar6 = DAT_003ac978;
    }
    if (bVar8) {
      *(undefined4 *)(param_1 + 0x6c) = uVar6;
    }
    *(undefined4 *)(param_1 + 0xd88) = uVar4;
    return;
  case 5:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    uVar4 = DAT_003ac98c;
    break;
  case 7:
    *(undefined *)(param_1 + 0xd8d) = 0;
    uVar4 = DAT_003ac980;
    break;
  default:
    FUN_00374428(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0xd88) = uVar4;
  return;
}

