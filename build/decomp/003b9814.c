// OoT3D decomp @ 003b9814  name=FUN_003b9814  size=800

void FUN_003b9814(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  undefined4 uVar9;
  uint uVar10;
  float fVar11;

  iVar7 = *(int *)(param_1 + 0x124);
  iVar8 = *(int *)(iRam003b9b34 + param_2);
  FUN_003731e0(param_1 + 0x1a4);
  uVar5 = uRam003b9b58;
  uVar9 = uRam003b9b38;
  sVar3 = *(short *)(param_1 + 0x2b8);
  if (sVar3 == 0) {
    if ((*(short *)(param_1 + 0x2dc) == 0) && (iRam003b9b50 < *(int *)(iVar8 + 0x2c))) {
      func_0x0027cba8(iVar7);
      *(undefined1 *)(*(int *)(param_1 + 0x2a4) + 0x10) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x2a4) + 0x11) = 1;
      *(undefined4 *)(iVar7 + 0x930) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(iVar7 + 0x938) = *(undefined4 *)(param_1 + 0x30);
      func_0x0036f5d8(param_2,1,0x32,0x5000);
      *(undefined2 *)(param_1 + 0x2b8) = 1;
      uVar9 = uRam003b9b54;
      *(short *)(param_1 + 0x2c8) = *(short *)(param_1 + 0x2c8) + 1;
      *(undefined4 *)(param_1 + 0x2c) = uVar9;
      bVar1 = *(byte *)(iVar7 + 0xb7);
      if (bVar1 == 0x18) {
        sVar3 = 0x2d;
      }
      else if (bVar1 < 0x12) {
        if (bVar1 < 0xc) {
          if (bVar1 < 6) {
            sVar3 = 8;
          }
          else {
            sVar3 = 0xf;
          }
        }
        else {
          sVar3 = 0x1e;
        }
      }
      else {
        sVar3 = 0x26;
      }
      *(short *)(param_1 + 0x2dc) = sVar3;
      *(short *)(iVar7 + 0x8b8) = sVar3 + 0xf;
      return;
    }
  }
  else if (sVar3 == 1) {
    if (*(short *)(param_1 + 0x2dc) == 0) {
      if (*(short *)(param_1 + 0x2cc) == 0) {
        *(undefined4 *)(param_1 + 0x1e4) = uRam003b9b38;
        uVar5 = FUN_0036ae14(param_1 + 0x1a4,0xc);
        uVar9 = uRam003b9b60;
        uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x310) = uVar5;
        *(undefined2 *)(param_1 + 0x2b8) = 2;
        func_0x00375bcc(param_1,uVar9);
        uVar5 = uRam003b9b68;
        uVar9 = uRam003b9b64;
        *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
        *(undefined2 *)(param_1 + 0x2dc) = 0x17;
        *(undefined4 *)(param_1 + 0x2c) = uVar9;
        iVar8 = 0;
        do {
          fVar11 = (float)func_0x003738a8(uVar5);
          iVar6 = param_1 + iVar8 * 0xc;
          *(float *)(iVar6 + 0x550) = fVar11 + *(float *)(iVar6 + 0x550);
          fVar11 = (float)func_0x003738a8(uVar5);
          *(float *)(iVar6 + 0x558) = fVar11 + *(float *)(iVar6 + 0x558);
          fVar11 = (float)func_0x003738a8(uVar5);
          *(float *)(iVar6 + 0x6ec) = fVar11 + *(float *)(iVar6 + 0x6ec);
          fVar11 = (float)func_0x003738a8(uVar5);
          iVar8 = iVar8 + 1;
          *(float *)(iVar6 + 0x6f4) = fVar11 + *(float *)(iVar6 + 0x6f4);
        } while (iVar8 < 10);
        *(undefined2 *)(iRam003b9b6c + iVar7) = 5;
        return;
      }
      *(short *)(param_1 + 0x2cc) = *(short *)(param_1 + 0x2cc) + -1;
      do {
        uVar9 = func_0x00371e50(uVar5);
        uVar10 = VectorFloatToUnsigned(uVar9,3);
      } while ((uint)*(byte *)(param_1 + 0x33a) == (uVar10 & 0xff));
      *(char *)(param_1 + 0x33a) = (char)uVar10;
      puVar4 = (undefined4 *)(iRam003b9b5c + (uVar10 & 0xff) * 0xc);
      *(undefined4 *)(param_1 + 0x28) = *puVar4;
      *(undefined4 *)(param_1 + 0x30) = puVar4[2];
      *(undefined2 *)(param_1 + 0x2b8) = 0;
      *(undefined2 *)(param_1 + 0x2dc) = 0xf;
      return;
    }
  }
  else if (sVar3 == 2) {
    func_0x00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),3,2000);
    if ((*(short *)(param_1 + 0x2dc) == 1) && (*(int *)(param_1 + 0x98) < iRam003b9b3c)) {
      func_0x00368fc0(uRam003b9b44,uRam003b9b40,param_2,param_1,(int)*(short *)(param_1 + 0x92),0x20
                     );
      func_0x00375bcc(iVar8,uRam003b9b48);
    }
    iVar7 = FUN_003736fc(*(undefined4 *)(param_1 + 0x310),uVar9,param_1 + 0x1a4);
    if (iVar7 != 0) {
      iVar7 = *(int *)(param_1 + 0x124);
      FUN_0036e734(param_1 + 0x1a4,10);
      *(undefined4 *)(param_1 + 0x2b0) = uRam003b9b4c;
      bVar1 = *(byte *)(iVar7 + 0xb7);
      if (bVar1 == 0x18) {
        uVar2 = 0x3c;
      }
      else if (bVar1 < 0xc) {
        if (bVar1 < 6) {
          uVar2 = 0xf;
        }
        else {
          uVar2 = 0x1e;
        }
      }
      else {
        uVar2 = 0x2d;
      }
      *(undefined2 *)(param_1 + 0x2dc) = uVar2;
    }
  }
  return;
}
