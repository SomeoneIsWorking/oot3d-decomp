// OoT3D decomp @ 0033d520  name=FUN_0033d520  size=700

/* WARNING: Removing unreachable block (ram,0x003530bc) */

void FUN_0033d520(float param_1,float param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  undefined8 unaff_d8;

  uVar1 = uRam0033d678;
  *(undefined1 *)(param_3 + 0x1a4) = 2;
  *(undefined4 *)(param_3 + 0x6c) = uVar1;
  if (1 < param_4 && param_4 != 3) {
    param_4 = 0;
  }
  if (*(byte *)(param_3 + 0xe74) == param_4) {
    return;
  }
  *(char *)(param_3 + 0xe74) = (char)param_4;
  param_4 = param_4 & 0xff;
  if (param_4 == 0) {
    uVar4 = *(uint *)(param_3 + 0xe54) & 0xffffefff;
LAB_0033d610:
    *(uint *)(param_3 + 0xe54) = uVar4;
  }
  else if (param_4 == 1) {
    *(undefined4 *)(param_3 + 0xe80) = *(undefined4 *)(param_3 + 0xe8c);
    *(undefined4 *)(param_3 + 0xe84) = *(undefined4 *)(param_3 + 0xe90);
    *(undefined4 *)(param_3 + 0xe88) = *(undefined4 *)(param_3 + 0xe94);
    if ((*(uint *)(param_3 + 0xe54) & 0x8000000) != 0) {
      FUN_0037547c(uRam0033d684,param_3 + 0xe80,4,uRam0033d680,uRam0033d680,uRam0033d67c);
    }
  }
  else if (param_4 == 3) {
    *(undefined4 *)(param_3 + 0xe80) = *(undefined4 *)(param_3 + 0xe8c);
    *(undefined4 *)(param_3 + 0xe84) = *(undefined4 *)(param_3 + 0xe90);
    *(undefined4 *)(param_3 + 0xe88) = *(undefined4 *)(param_3 + 0xe94);
    if ((*(uint *)(param_3 + 0xe54) & 0x8000000) != 0) {
      FUN_0037547c(uRam0033d688,param_3 + 0xe80,4,uRam0033d680,uRam0033d680,uRam0033d67c);
    }
    uVar4 = *(uint *)(param_3 + 0xe54) & 0xfffff7ff;
    goto LAB_0033d610;
  }
  iVar6 = iRam0033d68c;
  uVar5 = FUN_0036ae14(param_3 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(iRam0033d68c + (uint)*(byte *)(param_3 + 0x1b0) * 4) +
                        (uint)*(byte *)(param_3 + 0xe74) * 4));
  fVar3 = fRam0035318c;
  fVar2 = fRam00353188;
  uVar1 = uRam0033d690;
  uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  iVar7 = *(int *)(*(int *)(iVar6 + (uint)*(byte *)(param_3 + 0x1b0) * 4) +
                  (uint)*(byte *)(param_3 + 0xe74) * 4);
  iVar6 = param_3 + 0x1c4;
  uVar4 = in_fpscr & 0xfffffff | (uint)(param_1 == fRam00353188) << 0x1e;
  *(undefined1 *)(param_3 + 0x234) = 2;
  if (!SUB41(uVar4 >> 0x1e,0)) {
    bVar8 = false;
    if (*(int *)(param_3 + 500) == iVar7) {
      uVar4 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_3 + 0x200) == param_2) << 0x1e;
      bVar8 = SUB41(uVar4 >> 0x1e,0);
    }
    if (!bVar8) {
      uVar4 = uVar4 & 0xfffffff | (uint)(fVar2 <= param_1) << 0x1d;
      if (SUB41(uVar4 >> 0x1d,0)) {
        *(undefined1 *)(param_3 + 0x235) = 7;
        func_0x003204a4(param_2,iVar6,iVar7,*(undefined1 *)(param_3 + 0x238),
                        *(undefined4 *)(param_3 + 0x240),unaff_d8);
      }
      else {
        func_0x00320d28(iVar6);
        func_0x00358338(iVar6,*(undefined4 *)(param_3 + 0x240),*(undefined4 *)(param_3 + 0x23c));
        param_1 = -param_1;
      }
      *(float *)(param_3 + 0x1f8) = fVar3;
      *(float *)(param_3 + 0x1fc) = fVar3 / param_1;
      goto LAB_0035312c;
    }
  }
  func_0x00320d28(iVar6);
  func_0x003204a4(param_2,iVar6,iVar7,*(undefined1 *)(param_3 + 0x238),
                  *(undefined4 *)(param_3 + 0x23c));
  *(float *)(param_3 + 0x1f8) = fVar2;
LAB_0035312c:
  *(int *)(param_3 + 500) = iVar7;
  *(float *)(param_3 + 0x208) = param_2;
  *(undefined4 *)(param_3 + 0x20c) = uVar5;
  uVar5 = func_0x003fe340(iVar6,iVar7);
  fVar9 = (float)VectorSignedToFloat(uVar5,(byte)(uVar4 >> 0x15) & 3);
  *(float *)(param_3 + 0x210) = fVar9 + fVar3;
  if (*(byte *)(param_3 + 0x234) < 4) {
    *(float *)(param_3 + 0x200) = param_2;
    if (*(byte *)(param_3 + 0x234) < 2) {
      *(float *)(param_3 + 0x20c) = *(float *)(param_3 + 0x210) - fVar3;
    }
  }
  else {
    *(float *)(param_3 + 0x200) = fVar2;
  }
  *(undefined4 *)(param_3 + 0x204) = uVar1;
  return;
}
