// OoT3D decomp @ 0027e974  name=FUN_0027e974  size=644

void FUN_0027e974(float *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  if ((param_1 != (float *)0x0 && param_2 != (byte *)0x0) &&
     (bVar1 = *param_2, *(byte *)(param_1 + 0x60) = bVar1, bVar1 < 0x11)) {
    FUN_0035fb94((int)param_1 + 0x182,param_2 + 2);
    fVar5 = fRam0027ec00;
    fVar3 = fRam0027ebf8;
    param_1[0x62] = *(float *)(param_2 + 8);
    param_1[99] = *(float *)(param_2 + 0xc);
    param_1[100] = *(float *)(param_2 + 0x10);
    param_1[0x65] = *(float *)(param_2 + 0x14);
    param_1[0x66] = *(float *)(param_2 + 0x18);
    param_1[0x67] = *(float *)(param_2 + 0x1c);
    param_1[0x68] = *(float *)(param_2 + 0x20);
    param_1[0x6a] = *(float *)(param_2 + 0x24);
    param_1[0x6b] = *(float *)(param_2 + 0x28);
    fVar7 = (float)VectorUnsignedToFloat((uint)param_2[0x2c],(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piRam0027ebfc + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(char *)(param_1 + 0x6c) = (char)(int)((fVar7 * fVar3) / fVar8 + fVar5);
    *(undefined1 *)((int)param_1 + 0x1b1) = 0;
    fVar7 = fRam0027ec08;
    fVar3 = fRam0027ec04;
    pfVar6 = param_1;
    if (param_1 < param_1 + (uint)*(byte *)(param_1 + 0x60) * 6) {
      do {
        fVar8 = (float)FUN_003759d0();
        fVar8 = fVar8 * fVar5 * param_1[0x6a] + param_1[0x6a] * fVar5;
        *pfVar6 = fVar8;
        pfVar6[1] = fVar8;
        pfVar6[2] = fVar3;
        pfVar6[3] = fVar3;
        pfVar6[4] = fVar3;
        fVar8 = (float)FUN_003759d0();
        *(short *)(pfVar6 + 5) = (short)(int)(fVar8 * fVar7);
        fVar8 = (float)FUN_003759d0();
        *(short *)((int)pfVar6 + 0x16) = (short)(int)(fVar8 * fVar7);
        pfVar6 = pfVar6 + 6;
      } while (pfVar6 < param_1 + (uint)*(byte *)(param_1 + 0x60) * 6);
    }
    iVar2 = (**(code **)(*(int *)*puRam0027ec10 + 0xc))
                      ((int *)*puRam0027ec10,0x1b8,uRam0027ec0c,0xb7);
    fVar3 = 0.0;
    if (iVar2 != 0) {
      fVar3 = (float)FUN_00348f34(iVar2,uRam0027ec14);
    }
    param_1[0x75] = fVar3;
    FUN_00348be4();
    uVar4 = FUN_0033aaac(*(undefined4 *)(param_2 + 0x48),0x12);
    FUN_00348a64(param_1[0x75],0,uVar4,uRam0027ec1c,uRam0027ec1c,uRam0027ec18,uRam0027ec18);
    if (((*puRam0027ec20 & 1) == 0) && (iVar2 = FUN_003679b4(puRam0027ec20), iVar2 != 0)) {
      FUN_0036788c(uRam0027ec24);
    }
    fVar3 = (float)FUN_00340d00(*(undefined4 *)(iRam0027ec30 + 0x47c),param_1[0x75],0);
    param_1[0x76] = fVar3;
    fVar3 = *(float *)(param_2 + 0x44);
    param_1[0x74] = fVar3;
    if (fVar3 != 1.4013e-45) {
      param_1[0x73] = 0.0;
      return;
    }
    *(undefined1 *)(param_1 + 0x6d) = 0;
    fVar3 = *(float *)(param_2 + 0x34);
    fVar5 = *(float *)(param_2 + 0x38);
    fVar7 = *(float *)(param_2 + 0x3c);
    fVar8 = *(float *)(param_2 + 0x40);
    param_1[0x6e] = *(float *)(param_2 + 0x30);
    param_1[0x6f] = fVar3;
    param_1[0x70] = fVar5;
    param_1[0x71] = fVar7;
    param_1[0x72] = fVar8;
    iVar2 = FUN_00332c98();
    uVar4 = FUN_00332c98();
    fVar3 = (float)FUN_0034faa8(uVar4,iVar2 + 0xa70,param_1 + 0x6d);
    param_1[0x73] = fVar3;
  }
  return;
}

