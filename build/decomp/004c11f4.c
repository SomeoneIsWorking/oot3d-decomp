// OoT3D decomp @ 004c11f4  name=FUN_004c11f4  size=1168

void FUN_004c11f4(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  uint auStack_6c [3];
  undefined1 auStack_60 [20];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  
  iVar5 = iRam004c1688;
  iVar7 = iRam004c1684;
  *(int *)(iRam004c1684 + 0x38) = param_2 << 1;
  if (param_6 == iVar5) {
    uVar3 = *(uint *)(param_8 + 0x29b8) | 2;
  }
  else {
    uVar3 = *(uint *)(param_8 + 0x29b8) & 0xfffffffd;
  }
  *(uint *)(param_8 + 0x29b8) = uVar3;
  func_0x004c4560(param_8,param_1);
  iVar1 = iRam004c1690;
  if ((param_6 != iRam004c168c) && (*(int *)(iRam004c1690 + 0x14e4) != 3)) {
    iVar4 = (int)(*(uint *)(iRam004c1690 + 0xb8) & *(uint *)(iRam004c1694 + 8)) >>
            *(sbyte *)(iRam004c1698 + 2);
    if (*(int *)(iRam004c1690 + 4) == 0) {
      if (1 < iVar4) {
        iVar4 = iRam004c169c + iVar4 * 0x10;
        func_0x0033dd8c(*(undefined4 *)(iVar4 + -0x20),*(undefined4 *)(iVar4 + -0x1c),
                        *(undefined4 *)(iVar4 + -0x18),*(undefined4 *)(iVar4 + -0x14),
                        param_8 + 0x254,0xe,4,0);
        uVar3 = *(uint *)(param_8 + 0x29b8);
        bVar11 = (uVar3 & 2) != 0;
        if (bVar11) {
          uVar3 = (uint)*(byte *)(param_8 + 0x1749);
        }
        if (!bVar11 || uVar3 == 2) {
          func_0x002b9bf8(param_8,4,1);
          func_0x002b9bf8(param_8,0x11,1);
          if (*(int *)(iVar7 + 0x3c) == 0) {
            func_0x002b9bf8(param_8,5,1);
          }
          else {
            func_0x002b9bf8(param_8,6,1);
          }
          if (*(int *)(iVar7 + 0x40) == 8) {
            func_0x002b9bf8(param_8,0x12,1);
          }
          else {
            func_0x002b9bf8(param_8,0x13,1);
          }
        }
      }
      if (param_4 != 0 && param_6 != iVar5) {
        iVar5 = iRam004c16a0 + param_4 * 8;
        func_0x002b9bf8(param_8,*(undefined4 *)(iVar5 + -8),1);
        func_0x002b9bf8(param_8,*(undefined4 *)(iVar5 + -4),1);
      }
    }
    else if (iVar4 != 0) {
      uVar3 = *(uint *)(param_8 + 0x29b8);
      bVar11 = (uVar3 & 2) != 0;
      if (bVar11) {
        uVar3 = (uint)*(byte *)(param_8 + 0x1749);
      }
      if (!bVar11 || uVar3 == 2) {
        func_0x002b9bf8(param_8,0xf,1);
      }
    }
  }
  auStack_6c[0] = (uint)(*(char *)(param_8 + 0x1b4) == '\a');
  func_0x0035e240(param_8 + 0x254,param_8 + 0x148,param_6,param_7,param_8);
  fVar2 = fRam004c16a4;
  if ('\0' < *(char *)(param_8 + 0x24b8)) {
    uVar8 = (ushort)*(byte *)(param_8 + 0x1ac);
    if (uVar8 == 6) {
      *pfRam004c16a8 = *(float *)(param_8 + 0x2244) * *(float *)(iVar7 + 4);
    }
    else {
      iVar7 = (int)*(char *)(param_8 + 0x1a9);
      if (iVar7 == 5) {
        uVar8 = *(ushort *)(iVar1 + 0x4a);
      }
      fVar12 = fRam004c16ac;
      if (iVar7 != 5 || uVar8 != 0) {
        iVar7 = iVar7 + -2;
        if ((iVar7 < 1) || (5 < iVar7)) {
          iVar7 = 0;
        }
        fVar12 = *(float *)(iRam004c16b0 + iVar7 * 4);
      }
      *pfRam004c16a8 = fVar12;
    }
    uVar3 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_8 + 0x58) < fVar2) << 0x1f;
    in_fpscr = uVar3 | (uint)(NAN(*(float *)(param_8 + 0x58)) || NAN(fVar2)) << 0x1c;
    if ((byte)(uVar3 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      uVar6 = func_0x003478bc(*(undefined4 *)(param_8 + 0x27c),0x10);
      func_0x00313c18(param_8,uVar6,auStack_60);
      uVar6 = func_0x003478bc(*(undefined4 *)(param_8 + 0x27c),0x10);
      func_0x003735ac(auStack_6c,uVar6,uRam004c16b4);
      func_0x002b9a88(param_1,param_8,auStack_6c,auStack_60);
    }
    *(char *)(param_8 + 0x24b8) = *(char *)(param_8 + 0x24b8) + -1;
  }
  if (((*(uint *)(param_8 + 0x29b8) & 0x20) != 0) && ((*(uint *)(param_8 + 0x29b8) & 0x18) == 0)) {
    func_0x003103a4(*(undefined4 *)(*(int *)(param_8 + 0x27c) + 0x10));
    *(uint *)(param_8 + 0x29b8) = *(uint *)(param_8 + 0x29b8) & 0xffffffdf;
  }
  uVar3 = 0xffffffff;
  iVar7 = func_0x004c68a0(*(undefined4 *)(param_8 + 0x24e0),*(undefined4 *)(param_8 + 0x284));
  pbVar10 = (byte *)(iRam004c16b8 + param_5 * 2);
  if (iVar7 != 0) {
    iVar7 = func_0x004c6734(iVar7,(int)(*(float *)(param_8 + 0x290) + fRam004c16bc));
    uVar9 = (uint)*(char *)(iVar7 + 2);
    uVar3 = (uint)*(char *)(iVar7 + 3);
    if (-1 < (int)uVar9) goto LAB_004c1560;
  }
  uVar9 = (uint)*pbVar10;
LAB_004c1560:
  iVar7 = param_8 + 0x2538;
  func_0x0035e3a4(iVar7,0,uVar9);
  if ((int)uVar3 < 0) {
    uVar3 = (uint)pbVar10[1];
  }
  func_0x0035e3a4(iVar7,1,uVar3);
  func_0x0035e330(iVar7);
  if (*(int *)(iVar1 + 4) == 0) {
    *(float *)(param_8 + 10000) = fVar2;
    uVar6 = VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    if (*piRam004c16c0 == 0) {
      *(undefined4 *)(param_8 + 0x270c) = uVar6;
      func_0x003586ec(param_8 + 0x2704);
    }
    func_0x00373bec(param_8 + 0x2704);
    if ((*(uint *)(param_8 + 0x29b8) & 0x18) != 0) {
      fStack_4c = *(float *)(param_8 + 0x2a48);
      if ((*(uint *)(param_8 + 0x29b8) & 8) == 0) {
        fStack_44 = *(float *)(param_8 + 0x2a48);
        fStack_48 = fStack_4c;
        func_0x00373bec(param_8 + 0x2834);
        uVar3 = *(uint *)(param_8 + 0x29b8) & 0xffffffef;
      }
      else {
        fStack_48 = fVar2;
        fStack_44 = fVar2;
        func_0x00373bec(param_8 + 0x279c);
        uVar3 = *(uint *)(param_8 + 0x29b8) & 0xfffffff7;
      }
      *(uint *)(param_8 + 0x29b8) = uVar3;
      fStack_40 = fRam004c16c4 - *(float *)(param_8 + 0x2a48);
      func_0x00357a50(param_8 + 0x254,0x20,3,&fStack_4c,0);
    }
  }
  return;
}

