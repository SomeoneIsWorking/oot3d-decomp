// OoT3D decomp @ 002ddba0  name=FUN_002ddba0  size=612

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002ddba0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float unaff_r4;
  bool bVar7;
  float fVar8;
  undefined8 unaff_d8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar4 = DAT_002dde18;
  if (*(int *)(param_1 + 0x16f8) != 0) {
    iVar2 = FUN_0033bd6c(param_1);
    if (iVar2 == 0) {
      uVar3 = *(uint *)(param_1 + 0x1710);
      bVar7 = (uVar3 & 0x1000000) != 0;
      if (bVar7) {
        uVar3 = (uint)*(ushort *)(param_1 + 0x2218);
      }
      if (!bVar7 || uVar3 == 0) {
        iVar2 = *(int *)(param_1 + 0x16f8);
        uStack_2c = *(undefined4 *)(DAT_00334300 + *(int *)(DAT_003342fc + 4) * 0x134 + 0x54);
        uStack_28 = DAT_00334304;
        uStack_24 = DAT_00334304;
        uVar4 = FUN_003478bc(*(undefined4 *)(param_1 + 0x27c),9);
        FUN_003735ac(&stack0xffffffe0,uVar4,&uStack_2c);
        fVar8 = *(float *)(iVar2 + 0x3c) - (float)unaff_d8;
        unaff_r4 = *(float *)(iVar2 + 0x44) - unaff_r4;
        uVar5 = FUN_003758b0(SQRT(fVar8 * fVar8 + unaff_r4 * unaff_r4),
                             (float)((ulonglong)unaff_d8 >> 0x20) - *(float *)(iVar2 + 0x40));
        uVar6 = FUN_003758b0(*(float *)(iVar2 + 0x44) - *(float *)(param_1 + 0x30),
                             *(float *)(iVar2 + 0x3c) - *(float *)(param_1 + 0x28));
        uVar4 = DAT_00334308;
        FUN_00375a18(param_1 + 0x4a,uVar6,4,DAT_00334308);
        FUN_00375a18(param_1 + 0x48,uVar5,4,uVar4);
        *(ushort *)(param_1 + 0x174a) = *(ushort *)(param_1 + 0x174a) | 2;
        FUN_002bf67c(param_1,0);
        return;
      }
    }
    FUN_003341e4(param_1,1);
    return;
  }
  if (*(int *)(DAT_002dde04 + 0x28) == 0xb) {
    FUN_00375a18(param_1 + 0x48,DAT_002dde08,10,4000);
  }
  else {
    if (*(char *)(param_1 + 2) == '\x02') {
      uVar3 = param_1 + 0x2000;
      iVar2 = *(int *)(DAT_002dde0c + param_2);
      if (iVar2 != 0) {
        bVar7 = *(int *)(param_1 + 0x1708) == DAT_002dde14;
        if (bVar7) {
          uVar3 = *(uint *)(param_1 + 0x29b8);
          bVar7 = (uVar3 & 0x200) == 0;
        }
        if ((bVar7) &&
           (((*(char *)(param_1 + 0x174e) != '\x01' || (*DAT_002dde10 < 'Q')) ||
            ((uVar3 & 0x400) != 0)))) {
          *(ushort *)(param_1 + 0x174a) = *(ushort *)(param_1 + 0x174a) | 0x200;
        }
LAB_002ddce8:
        FUN_002bf814(param_1,param_2,iVar2,0);
        return;
      }
      if (((*(uint *)(param_1 + 0x29b8) & 0x200) != 0) ||
         (((*(char *)(param_1 + 0x174e) == '\x01' && ('P' < *DAT_002dde10)) &&
          ((*(uint *)(param_1 + 0x29b8) & 0x400) == 0)))) goto LAB_002ddce8;
    }
    if (((*(uint *)(DAT_002dde04 + 0xa0) & 1) == 0) &&
       (iVar2 = FUN_003679b4(DAT_002dde1c), puVar1 = DAT_002dde28, uVar5 = DAT_002dde24, iVar2 != 0)
       ) {
      *DAT_002dde28 = DAT_002dde20;
      puVar1[1] = uVar5;
      puVar1[2] = uVar4;
    }
    iVar2 = 0;
    fVar8 = (float)FUN_003596d0(param_2,param_1,DAT_002dde28,&uStack_2c);
    if ((uint)fVar8 < (uint)DAT_002dde2c) {
      iVar2 = FUN_003758b0(uVar4,*(float *)(param_1 + 0x2c) - fVar8);
      if (iVar2 + 4000 < 0 == SCARRY4(iVar2,4000)) {
        if (4000 < iVar2) {
          iVar2 = 4000;
        }
      }
      else {
        iVar2 = -4000;
      }
    }
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0xbe);
    FUN_00375a18(param_1 + 0x48,iVar2,0xe,4000);
  }
  iVar2 = FUN_0033bd6c(param_1);
  if (iVar2 == 0) {
    uVar3 = *(uint *)(param_1 + 0x1710);
    bVar7 = (uVar3 & 0x1000000) != 0;
    if (bVar7) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x2218);
    }
    if (!bVar7 || uVar3 == 0) {
      uVar4 = 0;
      goto LAB_002dddf0;
    }
  }
  uVar4 = 1;
LAB_002dddf0:
  FUN_002bf67c(param_1,uVar4);
  return;
}

