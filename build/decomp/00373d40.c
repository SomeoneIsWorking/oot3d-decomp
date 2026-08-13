// OoT3D decomp @ 00373d40  name=FUN_00373d40  size=80

/* WARNING: Removing unreachable block (ram,0x003530bc) */

void FUN_00373d40(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  undefined8 unaff_d8;
  undefined8 unaff_d9;

  fVar4 = fRam00373d94;
  uVar3 = uRam00373d90;
  uVar5 = FUN_0036ae14();
  fVar2 = fRam0035318c;
  fVar1 = fRam00353188;
  uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  uVar7 = in_fpscr & 0xfffffff | (uint)(fVar4 == fRam00353188) << 0x1e;
  *(undefined1 *)(param_1 + 0x70) = 2;
  if (!SUB41(uVar7 >> 0x1e,0)) {
    bVar6 = false;
    if (*(int *)(param_1 + 0x30) == param_2) {
      uVar7 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x3c) == fVar4) << 0x1e;
      bVar6 = SUB41(uVar7 >> 0x1e,0);
    }
    if (!bVar6) {
      uVar7 = uVar7 & 0xfffffff | (uint)(fVar1 <= fVar4) << 0x1d;
      if (SUB41(uVar7 >> 0x1d,0)) {
        *(undefined1 *)(param_1 + 0x71) = 7;
        func_0x003204a4(fVar4,param_1,param_2,*(undefined1 *)(param_1 + 0x74),
                        *(undefined4 *)(param_1 + 0x7c),unaff_d8,unaff_d9);
        fVar8 = fVar4;
      }
      else {
        func_0x00320d28(param_1);
        func_0x00358338(param_1,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x78));
        fVar8 = -fVar4;
      }
      *(float *)(param_1 + 0x34) = fVar2;
      *(float *)(param_1 + 0x38) = fVar2 / fVar8;
      goto LAB_0035312c;
    }
  }
  func_0x00320d28(param_1);
  func_0x003204a4(fVar4,param_1,param_2,*(undefined1 *)(param_1 + 0x74),
                  *(undefined4 *)(param_1 + 0x78));
  *(float *)(param_1 + 0x34) = fVar1;
LAB_0035312c:
  *(int *)(param_1 + 0x30) = param_2;
  *(float *)(param_1 + 0x44) = fVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  uVar5 = func_0x003fe340(param_1,param_2);
  fVar8 = (float)VectorSignedToFloat(uVar5,(byte)(uVar7 >> 0x15) & 3);
  *(float *)(param_1 + 0x4c) = fVar8 + fVar2;
  if (*(byte *)(param_1 + 0x70) < 4) {
    *(float *)(param_1 + 0x3c) = fVar4;
    if (*(byte *)(param_1 + 0x70) < 2) {
      *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x4c) - fVar2;
    }
  }
  else {
    *(float *)(param_1 + 0x3c) = fVar1;
  }
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  return;
}
