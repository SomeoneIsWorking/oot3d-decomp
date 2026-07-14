// OoT3D decomp @ 002b6c00  name=FUN_002b6c00  size=304

/* WARNING: Removing unreachable block (ram,0x003530bc) */

void FUN_002b6c00(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  
  uVar9 = VectorSignedToFloat(*(undefined4 *)(param_3 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x28) = uVar9;
  uVar9 = VectorSignedToFloat(*(undefined4 *)(param_3 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x2c) = uVar9;
  uVar9 = VectorSignedToFloat(*(undefined4 *)(param_3 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_3 + 8);
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0xe74) = 3;
  *(undefined1 *)(param_1 + 0x100e) = 5;
  *(ushort *)(param_1 + 0x1010) = *(ushort *)(param_1 + 0x1010) & 0xfffb;
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffff7ff;
  *(undefined4 *)(param_1 + 0xe80) = *(undefined4 *)(param_1 + 0xe8c);
  *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
  *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
  if ((*(uint *)(param_1 + 0xe54) & 0x8000000) != 0) {
    FUN_0037547c(uRam002b6d38,param_1 + 0xe80,4,uRam002b6d34,uRam002b6d34,uRam002b6d30);
  }
  iVar5 = iRam002b6d3c;
  uVar4 = FUN_0036ae14(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(iRam002b6d3c + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                        (uint)*(byte *)(param_1 + 0xe74) * 4));
  fVar3 = fRam0035318c;
  fVar2 = fRam00353188;
  uVar9 = uRam002b6d48;
  fVar1 = fRam002b6d44;
  fVar10 = fRam002b6d40;
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  iVar6 = *(int *)(*(int *)(iVar5 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                  (uint)*(byte *)(param_1 + 0xe74) * 4);
  iVar5 = param_1 + 0x1c4;
  uVar8 = in_fpscr & 0xfffffff | (uint)(fRam002b6d40 == fRam00353188) << 0x1e;
  *(undefined1 *)(param_1 + 0x234) = 2;
  if (!SUB41(uVar8 >> 0x1e,0)) {
    bVar7 = false;
    if (*(int *)(param_1 + 500) == iVar6) {
      uVar8 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x200) == fVar1) << 0x1e;
      bVar7 = SUB41(uVar8 >> 0x1e,0);
    }
    if (!bVar7) {
      uVar8 = uVar8 & 0xfffffff | (uint)(fVar2 <= fVar10) << 0x1d;
      if (SUB41(uVar8 >> 0x1d,0)) {
        *(undefined1 *)(param_1 + 0x235) = 7;
        FUN_003204a4(fVar1,iVar5,iVar6,*(undefined1 *)(param_1 + 0x238),
                     *(undefined4 *)(param_1 + 0x240));
      }
      else {
        FUN_00320d28(iVar5);
        FUN_00358338(iVar5,*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x23c));
        fVar10 = -fVar10;
      }
      *(float *)(param_1 + 0x1f8) = fVar3;
      *(float *)(param_1 + 0x1fc) = fVar3 / fVar10;
      goto LAB_0035312c;
    }
  }
  FUN_00320d28(iVar5);
  FUN_003204a4(fVar1,iVar5,iVar6,*(undefined1 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x23c));
  *(float *)(param_1 + 0x1f8) = fVar2;
LAB_0035312c:
  *(int *)(param_1 + 500) = iVar6;
  *(float *)(param_1 + 0x208) = fVar1;
  *(undefined4 *)(param_1 + 0x20c) = uVar4;
  uVar4 = FUN_003fe340(iVar5,iVar6);
  fVar10 = (float)VectorSignedToFloat(uVar4,(byte)(uVar8 >> 0x15) & 3);
  *(float *)(param_1 + 0x210) = fVar10 + fVar3;
  if (*(byte *)(param_1 + 0x234) < 4) {
    *(float *)(param_1 + 0x200) = fVar1;
    if (*(byte *)(param_1 + 0x234) < 2) {
      *(float *)(param_1 + 0x20c) = *(float *)(param_1 + 0x210) - fVar3;
    }
  }
  else {
    *(float *)(param_1 + 0x200) = fVar2;
  }
  *(undefined4 *)(param_1 + 0x204) = uVar9;
  return;
}

