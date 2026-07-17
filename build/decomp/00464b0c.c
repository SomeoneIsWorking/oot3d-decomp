// OoT3D decomp @ 00464b0c  name=FUN_00464b0c  size=390

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00464c64) overlaps instruction at (ram,0x00464c62)
    */
/* WARNING: Removing unreachable block (ram,0x005a039e) */

void FUN_00464b0c(float param_1,float param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  uint in_fpscr;
  undefined4 in_cr0;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar4 = iRam00464d3c;
  fVar13 = (float)VectorUnsignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = (float)VectorUnsignedToFloat(param_6,(byte)(in_fpscr >> 0x15) & 3);
  fVar15 = (float)VectorUnsignedToFloat(param_7,(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorUnsignedToFloat(param_8,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = fVar13 * fRam00464d38;
  fVar14 = fVar14 * fRam00464d38;
  fVar15 = fVar15 * fRam00464d38;
  fVar16 = fVar16 * fRam00464d38;
  if (*param_3 == 0) {
    *(float *)(iRam00464d3c + 0x24) = fVar13;
    *(float *)(iVar4 + 0x28) = fVar14;
    *(float *)(iVar4 + 0x2c) = fVar15;
    *(float *)(iVar4 + 0x30) = fVar16;
    *(int *)(iVar4 + 0x34) = (int)param_1;
    *(int *)(iVar4 + 0x38) = (int)param_2;
    *(undefined1 *)(param_3 + 0x11) = 1;
    iVar4 = param_4[1];
    iVar5 = param_4[2];
    iVar6 = param_4[3];
    iVar7 = param_4[4];
    iVar8 = param_4[5];
    iVar9 = param_4[6];
    iVar10 = param_4[7];
    param_3[1] = *param_4;
    param_3[2] = iVar4;
    param_3[3] = iVar5;
    param_3[4] = iVar6;
    param_3[5] = iVar7;
    param_3[6] = iVar8;
    param_3[7] = iVar9;
    param_3[8] = iVar10;
    iVar4 = param_4[9];
    iVar5 = param_4[10];
    iVar6 = param_4[0xb];
    iVar7 = param_4[0xc];
    iVar8 = param_4[0xd];
    iVar9 = param_4[0xe];
    iVar10 = param_4[0xf];
    param_3[9] = param_4[8];
    param_3[10] = iVar4;
    param_3[0xb] = iVar5;
    param_3[0xc] = iVar6;
    param_3[0xd] = iVar7;
    param_3[0xe] = iVar8;
    param_3[0xf] = iVar9;
    param_3[0x10] = iVar10;
    iVar5 = (**(code **)(*(int *)*puRam00464d80 + 0xc))
                      ((int *)*puRam00464d80,uRam00464d84,0x464d40,0x54);
    iVar4 = 0;
    if (iVar5 != 0) {
      iVar4 = func_0x0047fdd8(iVar5,iRam00464d3c);
    }
    *param_3 = iVar4;
    func_0x002d4554(iVar4,param_4);
    iVar4 = iRam0047fdd0;
    param_3 = (int *)*param_3;
    iVar5 = *param_3;
    param_3[1] = *(int *)(iVar5 + 0x24);
    param_3[2] = *(int *)(iVar5 + 0x28);
    param_3[3] = *(int *)(iVar5 + 0x2c);
    param_3[4] = iVar4;
    iVar4 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x34),(byte)(in_fpscr >> 0x15) & 3);
    param_3[5] = iVar4;
    iVar4 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
    param_3[6] = iVar4;
    piVar2 = piRam0047fdd4;
    if (*(char *)(iVar5 + 0x41) == '\0') {
      param_3[9] = *piRam0047fdd4;
      func_0x002cdbfc(param_3);
      iVar4 = 0;
      do {
        uVar3 = func_0x002cdb60(param_3[iVar4 + 0x9a]);
        iVar5 = func_0x002cdb0c(param_3[iVar4 + 0x1a]);
        iVar6 = iVar4 + 1;
        param_3[iVar4 + 0x11a] = uVar3 | iVar5 << 0xd;
        iVar4 = iVar6;
      } while (iVar6 < 0x80);
      *piVar2 = *piVar2 + 1;
    }
    return;
  }
  bVar1 = NAN(*(float *)(iRam00464d3c + 0x24)) || NAN(fVar13);
  bVar12 = false;
  if (*(float *)(iRam00464d3c + 0x24) == fVar13) {
    bVar12 = *(float *)(iRam00464d3c + 0x28) == fVar14;
    bVar1 = NAN(*(float *)(iRam00464d3c + 0x28)) || NAN(fVar14);
  }
  bVar11 = false;
  if (bVar12) {
    bVar11 = *(float *)(iRam00464d3c + 0x2c) == fVar15;
    bVar1 = NAN(*(float *)(iRam00464d3c + 0x2c)) || NAN(fVar15);
  }
  bVar12 = false;
  if (bVar11) {
    bVar12 = *(float *)(iRam00464d3c + 0x30) == fVar16;
    bVar1 = NAN(*(float *)(iRam00464d3c + 0x30)) || NAN(fVar16);
  }
  if (bVar12) {
    if (bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(float *)(iRam00464d3c + 0x24) = fVar13;
  *(float *)(iVar4 + 0x28) = fVar14;
  *(float *)(iVar4 + 0x2c) = fVar15;
  *(float *)(iVar4 + 0x30) = fVar16;
  iVar5 = *param_3;
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + 0x24);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar4 + 0x28);
  coprocessor_store(0,in_cr0,iVar5 + 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

