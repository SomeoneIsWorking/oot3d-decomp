// OoT3D decomp @ 00210d1c  name=FUN_00210d1c  size=788

void FUN_00210d1c(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;

  bVar2 = false;
  FUN_0037572c(DAT_00211020);
  fVar3 = DAT_00211024;
  *(ushort *)(param_1 + 0x94a) = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  if (*(short *)(param_1 + 0x94a) == 6 || *(short *)(param_1 + 0x94a) == 9) {
    bVar2 = true;
    *(undefined4 *)(param_1 + 0x140) = DAT_00211028;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,6);
    if (*(short *)(param_1 + 0x94a) == 6) {
      *(undefined4 *)(param_1 + 0x8a8) = DAT_0021102c;
    }
    else {
      FUN_0037572c(DAT_00211030,param_1);
      fVar4 = DAT_00211034;
      *(undefined4 *)(param_1 + 0x8c0) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x8c4) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x8c8) = *(undefined4 *)(param_1 + 0x30);
      uVar6 = DAT_00211038;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar4;
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar3;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar4;
      *(short *)(param_1 + 0x36) = (short)uVar6;
      *(short *)(param_1 + 0xbe) = (short)uVar6;
      FUN_0036e980(param_2,0,8);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x11;
      *(undefined4 *)(param_1 + 0x8a8) = DAT_0021103c;
    }
  }
  uVar6 = DAT_00211044;
  *(float *)(param_1 + 0x92c) = fVar3;
  uVar8 = DAT_00211048;
  FUN_00372d4c(DAT_00211048,DAT_00211040,param_1 + 0xbc,uVar6);
  if (bVar2) {
    FUN_00372f38(param_1,param_2,param_1 + 0x9fc,1,0);
  }
  else {
    FUN_00372f38(param_1,param_2,param_1 + 0x9fc,0,0);
    FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x568,0x10);
  }
  uVar6 = FUN_0036a924(param_1,param_2,1,0x58);
  *(undefined4 *)(param_1 + 0xa00) = uVar6;
  if (((*DAT_0021104c & 1) == 0) &&
     (iVar7 = FUN_003679b4(DAT_0021104c), puVar5 = DAT_00211054, uVar6 = DAT_00211050, iVar7 != 0))
  {
    *DAT_00211054 = DAT_00211050;
    puVar5[1] = uVar8;
    puVar5[2] = uVar8;
    puVar5[3] = uVar8;
    puVar5[4] = uVar8;
    puVar5[5] = uVar6;
    puVar5[6] = uVar8;
    puVar5[7] = uVar8;
    puVar5[8] = uVar8;
    puVar5[9] = uVar8;
    puVar5[10] = uVar6;
    puVar5[0xb] = uVar8;
  }
  FUN_00372224(param_1 + 0xa04,DAT_00211054);
  FUN_00353dd0(param_2,param_1 + 0x9a4);
  FUN_00353d24(param_2,param_1 + 0x9a4,param_1,DAT_00211058);
  uVar6 = DAT_0021105c;
  *(undefined4 *)(param_1 + 0x9ec) = uVar8;
  *(undefined4 *)(param_1 + 0x9e4) = uVar6;
  *(undefined4 *)(param_1 + 0x9e8) = DAT_00211060;
  *(undefined1 *)(param_1 + 0x1f) = 6;
  uVar8 = DAT_00211080;
  uVar6 = DAT_00211068;
  sVar1 = *(short *)(param_1 + 0x94a);
  if (sVar1 == 2) {
    *(undefined4 *)(param_1 + 0x70) = DAT_00211064;
    uVar8 = uVar6;
  }
  else {
    if (sVar1 != 5) {
      if (sVar1 == 6) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff6;
        *(undefined4 *)(param_1 + 0x8a8) = DAT_0021106c;
      }
      goto LAB_00211004;
    }
    *(undefined4 *)(param_1 + 0x70) = DAT_00211064;
  }
  *(undefined4 *)(param_1 + 0x8a8) = uVar8;
LAB_00211004:
  *(ushort *)(param_1 + 0x93c) = *(ushort *)(param_1 + 0x1c) >> 8;
  return;
}
