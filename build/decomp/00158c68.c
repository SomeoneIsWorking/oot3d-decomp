// OoT3D decomp @ 00158c68  name=FUN_00158c68  size=792

/* WARNING: Control flow encountered bad instruction data */

void FUN_00158c68(int param_1,int param_2)

{
  code *pcVar1;
  short sVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  float fVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int unaff_pc;
  uint in_fpscr;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr8;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float fStack_2c;

  uVar4 = DAT_00159054;
  puVar3 = DAT_00159050;
  if (((DAT_00159050[1] & 1) == 0) &&
     (iVar10 = FUN_003679b4(DAT_00159050 + 1), puVar6 = DAT_0015905c, uVar5 = DAT_00159058,
     iVar10 != 0)) {
    *DAT_0015905c = uVar4;
    puVar6[1] = uVar5;
    puVar6[2] = uVar4;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar10 = FUN_003679b4(DAT_00159050), puVar6 = DAT_00159060, iVar10 != 0)) {
    *DAT_00159060 = uVar4;
    puVar6[1] = uVar4;
    puVar6[2] = uVar4;
  }
  fVar14 = DAT_00159068;
  piVar7 = DAT_00159064;
  sVar9 = *(short *)(param_1 + 0xb1e) + 1;
  iVar10 = (int)sVar9;
  *(short *)(param_1 + 0xb1e) = sVar9;
  fVar12 = DAT_00159078;
  fVar8 = DAT_00159074;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar7 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if (iVar10 < (int)(fVar14 / fVar13 + DAT_0015906c)) {
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar7 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (iVar10 < (int)(DAT_00159070 / fVar14 + DAT_0015906c)) {
      sVar2 = (short)DAT_0015907c;
      fVar14 = (float)FUN_002cfca0((int)(short)(sVar2 + sVar9 * 0x1000));
      local_30 = fVar12 + fVar14 * fVar8 + *(float *)(param_1 + 0x2c);
      fVar14 = (float)FUN_00338f60((int)(short)(sVar2 + *(short *)(param_1 + 0xb1e) * 0x1000));
      sVar9 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
      fVar12 = (float)FUN_002cfca0((int)(short)(sVar9 + 0x4800));
      local_34 = *(float *)(param_1 + 0x28) + fVar14 * fVar8 * fVar12;
      sVar9 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
      fVar12 = (float)FUN_00338f60((int)(short)(sVar9 + 0x4800));
      fStack_2c = *(float *)(param_1 + 0x30) + fVar14 * fVar8 * fVar12;
    }
    else {
      fVar14 = (float)VectorSignedToFloat(iVar10 + -5,(byte)(in_fpscr >> 0x15) & 3);
      local_30 = *(float *)(param_1 + 0x2c) + DAT_00159078 + fVar14 * DAT_00159070;
      sVar9 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
      fVar14 = (float)FUN_002cfca0((int)(short)(sVar9 + 0x4800));
      local_34 = *(float *)(param_1 + 0x28) + fVar14 * fVar8;
      sVar9 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
      fVar14 = (float)FUN_00338f60((int)(short)(sVar9 + 0x4800));
      fStack_2c = *(float *)(param_1 + 0x30) + fVar14 * fVar8;
    }
    iVar10 = (int)((ulonglong)((longlong)iRam00159080 * (longlong)(int)*(short *)(param_1 + 0xb1e))
                  >> 0x20);
    if ((iVar10 - (iVar10 >> 0x1f)) * -3 + (int)*(short *)(param_1 + 0xb1e) != 0) {
      local_3c = 1;
      local_40 = 0xb;
      if (param_1 != 0xff) {
        coprocessor_load(0,in_cr3,unaff_pc + 4);
        coprocessor_function(10,0xb,1,in_cr0,in_cr0,in_cr8);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0x11,0x1591f2);
        (*pcVar1)();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)(param_1 + 0xb1e) == 1) {
      FUN_00375bcc(param_1,uRam00159088);
    }
  }
  iVar11 = FUN_003705a0(uVar4,DAT_0015908c,param_1 + 0x54);
  iVar10 = DAT_00159090;
  if (iVar11 != 0) {
    if (*(char *)(param_1 + 0xb1c) == '\0') {
      FUN_00353524(param_2,4);
      *(int *)(iVar10 + 0xee8) = (int)*(short *)(iVar10 + 0x1560);
    }
    else {
      local_40 = *(undefined4 *)(param_1 + 0x28);
      local_3c = *(undefined4 *)(param_1 + 0x84);
      local_38 = *(undefined4 *)(param_1 + 0x30);
      iVar11 = *(int *)(DAT_00159090 + 0xee8);
      if ((int)*(short *)(DAT_00159090 + 0x1560) < *(int *)(DAT_00159090 + 0xee8)) {
        iVar11 = (int)*(short *)(DAT_00159090 + 0x1560);
      }
      *(int *)(DAT_00159090 + 0xee8) = iVar11;
      iVar11 = FUN_0036405c(param_2,(int)*(short *)(param_1 + 0x1c));
      if ((iVar11 == 0) && (*(short *)(iVar10 + 0x1560) < 0x3d)) {
        FUN_0035353c(param_2,&local_40,
                     (int)(short)((short)DAT_0015917c + *(short *)(param_1 + 0x1c) * 0x100));
      }
      else {
        z_actor_003738d0(local_40,local_3c,local_38,param_2 + 0x208c,param_2,0x15,0,0,0,2,1);
      }
    }
    FUN_00374428(param_1);
  }
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + DAT_00159180;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  return;
}
