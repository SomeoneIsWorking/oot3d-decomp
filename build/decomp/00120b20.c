// OoT3D decomp @ 00120b20  name=FUN_00120b20  size=544

void FUN_00120b20(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint in_fpscr;
  float fVar12;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;

  uVar11 = *(undefined4 *)(param_1 + 0x124);
  *(undefined1 *)(param_1 + 0x2b4) = 1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400;
  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = uRam00120d50;
  uVar8 = uRam00120d40;
  if (*(short *)(param_1 + 0x2b8) == 0) {
    iVar9 = FUN_003736fc(uRam00120d54,param_1 + 0x1a4);
    if (iVar9 != 0) {
      func_0x00375bcc(param_1,uRam00120d58);
    }
    iVar9 = FUN_003736fc(*(float *)(param_1 + 0x310) - fRam00120d5c,param_1 + 0x1a4);
    fVar7 = fRam00120d74;
    uVar6 = uRam00120d70;
    uVar5 = uRam00120d6c;
    uVar4 = uRam00120d68;
    uVar3 = uRam00120d64;
    uVar2 = uRam00120d60;
    if (iVar9 != 0) {
      iVar9 = 0;
      do {
        uStack_50 = uVar2;
        uStack_4c = uVar2;
        uStack_48 = uVar2;
        uStack_44 = func_0x003738a8(uVar3);
        uStack_40 = func_0x00371e50(uVar1);
        uStack_3c = func_0x003738a8(uVar3);
        uStack_4c = uVar4;
        fStack_5c = (float)func_0x003738a8(uVar5);
        fStack_5c = fStack_5c + *(float *)(param_1 + 0x3c);
        fStack_58 = (float)func_0x003738a8(uVar5);
        fStack_58 = fStack_58 + *(float *)(param_1 + 0x40);
        fStack_54 = (float)func_0x003738a8(uVar5);
        fStack_54 = fStack_54 + *(float *)(param_1 + 0x44);
        fVar12 = (float)func_0x00371e50(uVar6);
        func_0x0036442c(fVar12 + fVar7,uVar11,&fStack_5c,&uStack_44,&uStack_50);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0xb);
      func_0x00375bcc(param_1,uRam00120d78);
    }
    iVar9 = FUN_003736fc(*(undefined4 *)(param_1 + 0x310),uVar1,param_1 + 0x1a4);
    if (iVar9 != 0) {
      func_0x00370350(uVar8,param_1 + 0x1a4,9);
      *(undefined2 *)(param_1 + 0x2b8) = 1;
      *(undefined2 *)(param_1 + 0x2dc) = 0x5a;
      return;
    }
  }
  else if (*(short *)(param_1 + 0x2b8) == 1) {
    if ((~*(ushort *)(param_1 + 700) & 0xf) == 0) {
      func_0x00375bcc(param_1,uRam00120d44);
    }
    if (*(short *)(param_1 + 0x2dc) == 0) {
      iVar10 = *(int *)(param_1 + 0x124);
      func_0x00374a58(uVar8,param_1 + 0x1a4,7);
      *(undefined4 *)(param_1 + 0x2b0) = uRam00120d48;
      uVar8 = FUN_0036ae14(param_1 + 0x1a4,7);
      iVar9 = iRam00120d4c;
      uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x310) = uVar8;
      *(undefined2 *)(iVar9 + iVar10) = 0x2d;
      *(undefined2 *)(param_1 + 0x2b8) = 0;
    }
  }
  return;
}
