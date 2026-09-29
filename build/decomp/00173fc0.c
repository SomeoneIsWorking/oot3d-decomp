// OoT3D decomp @ 00173fc0  name=FUN_00173fc0  size=204

void FUN_00173fc0(int param_1,int param_2)

{
  float fVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;

  fVar1 = DAT_00174090;
  if (*(float *)(param_1 + 0x1a8) != DAT_00174090) {
    *(uint *)(*(int *)(DAT_0017408c + param_2) + 0x1714) =
         *(uint *)(*(int *)(DAT_0017408c + param_2) + 0x1714) & 0xffffffef;
    *(float *)(param_1 + 0x1a8) = fVar1;
  }
  iVar4 = FUN_003705a0(DAT_00174098,DAT_00174094,param_1 + 0x2c);
  if ((iVar4 != 0) &&
     (iVar4 = FUN_00370378(param_1 + 0xc0,(int)(short)(*(short *)(param_1 + 0x38) + -0x4000),0x400),
     puVar2 = DAT_001740a0, iVar4 != 0)) {
    *(byte *)(param_1 + 0x1c1) = *(char *)(param_1 + 0x1c1) + 1U & 3;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0017409c;
    *puVar2 = 0;
    if (*(char *)(param_1 + 0x1c0) == '\x01') {
      sVar3 = *(short *)(param_1 + 0x1c4) + 10;
      *(short *)(param_1 + 0x1c4) = sVar3;
      if (0x78 < sVar3) {
        sVar3 = 0x78;
      }
      *(short *)(param_1 + 0x1c4) = sVar3;
    }
  }
  return;
}
