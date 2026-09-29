// OoT3D decomp @ 004045a0  name=FUN_004045a0  size=208

void FUN_004045a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;

  FUN_00404114();
  iVar1 = FUN_0030c550();
  uVar4 = 0;
  uVar5 = (uint)*(ushort *)(DAT_00404670 + param_1);
  do {
    if ((uVar5 & 1) != 0) {
      iVar2 = FUN_0030c20c(iVar1,7);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
      *(undefined1 *)(iVar2 + 4) = 0x2b;
      *(int *)(iVar2 + 0x14) = 1 << (uVar4 & 0xff);
      iVar3 = param_1 + uVar4 * 0x10;
      *(int *)(iVar2 + 0x10) = param_1 + 0xf4;
      if (*(int *)(iVar3 + 0x20a4) < *(int *)(iVar3 + 0x20a0)) {
        fVar6 = (float)VectorSignedToFloat(*(int *)(iVar3 + 0x20a4),(byte)(in_fpscr >> 0x15) & 3);
        fVar7 = (float)VectorSignedToFloat(*(int *)(iVar3 + 0x20a0),(byte)(in_fpscr >> 0x15) & 3);
        fVar6 = ((*(float *)(iVar3 + 0x209c) - *(float *)(iVar3 + 0x2098)) * fVar6) / fVar7 +
                *(float *)(iVar3 + 0x2098);
      }
      else {
        fVar6 = *(float *)(iVar3 + 0x209c);
      }
      *(float *)(iVar2 + 0x18) = fVar6;
      FUN_0030c1e8(iVar1,iVar2);
    }
    uVar4 = uVar4 + 1;
    uVar5 = uVar5 >> 1;
  } while (uVar4 < 4);
  return;
}
