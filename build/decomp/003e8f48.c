// OoT3D decomp @ 003e8f48  name=FUN_003e8f48  size=692

void FUN_003e8f48(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined2 uVar3;
  short sVar4;
  undefined4 uVar5;
  bool bVar6;
  uint in_fpscr;
  int iVar7;

  fVar2 = DAT_003e9204;
  uVar1 = DAT_003e9200;
  if (0x4d < *(short *)(param_1 + 0x45a)) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x1f8);
  if ((DAT_003e91fc < iVar7) && (iVar7 < DAT_003e9208)) {
    *(undefined4 *)(param_1 + 100) = DAT_003e920c;
    iVar7 = FUN_00363108(DAT_003e9210,param_1,param_2,(int)*(short *)(param_1 + 0x36));
    if (iVar7 == 0) {
      *(float *)(param_1 + 0x6c) = fVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x6c) = DAT_003e9214;
    }
    *(undefined2 *)(param_1 + 0x45e) = 1;
    *(byte *)(param_1 + 0x534) = *(byte *)(param_1 + 0x534) & 0xf9;
  }
  else if (DAT_003e9218 < iVar7) {
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      *(undefined4 *)(param_1 + 0x1f8) = DAT_003e921c;
    }
    else {
      FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),1,DAT_003e9220,0);
      if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
        *(short *)(param_1 + 0x452) = *(short *)(param_1 + 0x452) + -1;
      }
      *(float *)(param_1 + 100) = fVar2;
      *(float *)(param_1 + 0x6c) = fVar2;
      *(undefined2 *)(param_1 + 0x45e) = 0;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
      if (*(short *)(param_1 + 0x462) == 0) {
        FUN_0035a534(param_1,param_2,1);
        if (*(short *)(param_1 + 0x460) == 0) {
          *(undefined2 *)(param_1 + 0x460) = 1;
          uVar3 = 2;
        }
        else {
          uVar3 = 1;
          *(undefined2 *)(param_1 + 0x460) = 0;
        }
        *(undefined2 *)(param_1 + 0x462) = uVar3;
      }
      else {
        FUN_0035a534(param_1,param_2,0);
      }
      iVar7 = FUN_00363e64(param_1,param_1 + 0x468);
      if (((DAT_003e9224 < iVar7) || (*(short *)(param_1 + 0x456) == 0)) &&
         (*(short *)(param_1 + 0x45a) == 0)) {
        uVar5 = FUN_0036ae14(param_1 + 0x1bc,0);
        uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar1,fVar2,uVar5,fVar2,param_1 + 0x1bc,0);
        *(undefined4 *)(param_1 + 0x448) = 7;
        *(float *)(param_1 + 0x6c) = fVar2;
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
        *(undefined4 *)(param_1 + 0x44c) = DAT_003e9228;
      }
    }
  }
  bVar6 = *(float *)(param_1 + 0x6c) == fVar2;
  if (!bVar6) {
    bVar6 = (*(ushort *)(param_1 + 0x90) & 8) == 0;
  }
  if (!bVar6) {
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x82) * 2 - *(short *)(param_1 + 0x36);
    FUN_00376864(param_1);
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfff7;
  }
  FUN_003731e0(param_1 + 0x1bc);
  if (*(short *)(param_1 + 0x452) == 0) {
    if (*(short *)(param_1 + 0x45a) == 0) {
      FUN_003660fc(uVar1,param_1 + 0x1bc,0);
      *(float *)(param_1 + 0x6c) = fVar2;
      *(undefined2 *)(param_1 + 0x452) = 3;
      *(undefined2 *)(param_1 + 0x454) = 0x3c;
      *(undefined4 *)(param_1 + 0x448) = 10;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
      *(undefined4 *)(param_1 + 0x44c) = DAT_003e922c;
      goto LAB_003e91bc;
    }
  }
  else {
LAB_003e91bc:
    if (*(short *)(param_1 + 0x45a) == 0) {
      sVar4 = *(short *)(param_1 + 0x36);
      goto LAB_003e91ec;
    }
  }
  if (*(short *)(param_1 + 0x45c) < 8000) {
    *(short *)(param_1 + 0x45c) = *(short *)(param_1 + 0x45c) + 0x215;
  }
  sVar4 = *(short *)(param_1 + 0xbe) + *(short *)(param_1 + 0x45c);
LAB_003e91ec:
  *(short *)(param_1 + 0xbe) = sVar4;
  return;
}
