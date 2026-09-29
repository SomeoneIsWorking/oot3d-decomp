// OoT3D decomp @ 003992fc  name=FUN_003992fc  size=1228

void FUN_003992fc(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;

  iVar2 = iRam003996c8;
  fVar11 = *(float *)(iRam003996c8 + 0x1c);
  FUN_0031cb28();
  uVar8 = uRam003996d4;
  uVar3 = uRam003996d0;
  if (((*(uint *)(iRam003996cc + param_2) & 0x1f) == 0) && (*(char *)(iVar2 + 9) < '\x10')) {
    fVar10 = (float)FUN_003738a8(uRam003996d4);
    *(short *)(param_1 + 0xfec) = (short)(int)fVar10;
    fVar10 = (float)FUN_003738a8(uVar8);
    *(short *)(param_1 + 0xff2) = (short)(int)fVar10;
    fVar10 = (float)FUN_003738a8(uVar8);
    *(short *)(param_1 + 0xff8) =
         (*(short *)(param_1 + 0xbe) - *(short *)(param_1 + 0xbc)) + (short)(int)fVar10;
  }
  else {
    FUN_0036e168(uRam003996d0,uRam003996dc,uRam003996d8,uRam003996d0,param_1 + 0x1e4);
  }
  FUN_003731e0(param_1 + 0x1a4);
  uVar8 = uRam003996e0;
  fVar10 = (float)FUN_003738a8(uRam003996e0);
  FUN_00375a18(param_1 + 0xfea,(int)*(short *)(param_1 + 0xfec),1,
               (int)(short)((short)(int)fVar10 + 500),0);
  FUN_00375a18(param_1 + 0xfe8,0,1,500,0);
  fVar10 = (float)FUN_003738a8(uVar8);
  FUN_00375a18(param_1 + 0xff0,(int)*(short *)(param_1 + 0xff2),1,
               (int)(short)((short)(int)fVar10 + 500),0);
  FUN_00375a18(param_1 + 0xfee,0,1,500,0);
  fVar10 = (float)FUN_003738a8(uVar8);
  FUN_00375a18(param_1 + 0xff6,(int)*(short *)(param_1 + 0xff8),1,
               (int)(short)((short)(int)fVar10 + 500),0);
  cVar1 = *(char *)(iVar2 + 9);
  fVar10 = fVar11;
  if (((cVar1 != '\x10') && (fVar10 = fRam003996e4, cVar1 != '\x11')) &&
     (fVar10 = fVar11, cVar1 != '\x12')) {
    return;
  }
  if (*(char *)(param_1 + 0xf95) != '\0') {
    sVar5 = *(short *)(param_1 + 4000) + -1;
    *(short *)(param_1 + 4000) = sVar5;
    if (sVar5 != 0) {
      return;
    }
    if (*(short *)(param_1 + 0x1c) == 5) {
      *(char *)(iVar2 + 9) = cVar1 + '\x01';
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  sVar5 = *(short *)(param_1 + 0x1c);
  if (sVar5 == 3) {
    if (0x17 < *(short *)(param_1 + 4000)) goto LAB_00399708;
  }
  else if (sVar5 == 4) {
    if (0x23 < *(short *)(param_1 + 4000)) {
LAB_00399708:
      *(undefined1 *)(param_1 + 0xf95) = 1;
      *(undefined1 *)(param_1 + 0xf98) = 1;
      *(undefined2 *)(param_1 + 4000) = 0x30;
      *(char *)(iVar2 + 9) = cVar1 + '\x01';
      goto LAB_00399720;
    }
  }
  else if (sVar5 != 5) goto LAB_00399708;
  iVar6 = (int)*(short *)(param_1 + 4000);
  uVar8 = (undefined4)((longlong)iRam003996e8 * (longlong)iVar6);
  iVar7 = (int)((ulonglong)((longlong)iRam003996e8 * (longlong)iVar6) >> 0x20);
  if (((iVar7 - (iVar7 >> 0x1f)) * -3 + iVar6 == 0) && (-1 < iVar6)) {
    if (iVar6 < 0xc) {
      fVar11 = (float)FUN_003738a8(uRam003996ec,iVar6,0,uVar8);
      FUN_0031c7d4(uVar3,uVar3,uRam003996f0,param_2,param_1,1,(int)(short)((short)(int)fVar11 + 0xd)
                   ,2,1);
    }
    else {
      fVar11 = (float)FUN_003738a8(uRam003996ec,iVar6,0,uVar8);
      uVar8 = VectorSignedToFloat(((int)*(short *)(param_1 + 4000) >> 3) + 1,
                                  (byte)(in_fpscr >> 0x15) & 3);
      FUN_0031c7d4(uVar3,uRam003996f4,uVar8,param_2,param_1,1,(int)(short)((short)(int)fVar11 + 6),2
                   ,1);
    }
    uVar8 = VectorSignedToFloat(((int)*(short *)(param_1 + 4000) >> 3) + 1,
                                (byte)(in_fpscr >> 0x15) & 3);
    FUN_0031f5a8(uRam003996f8,uVar3,uVar8,param_2,param_1,2,0x32,5,1);
  }
  sVar5 = *(short *)(param_1 + 4000) + 1;
  *(short *)(param_1 + 4000) = sVar5;
  uVar3 = uRam003996fc;
  if (0x2f < sVar5) {
    *(char *)(param_1 + 0xf95) = *(char *)(param_1 + 0xf95) + '\x01';
    *(undefined1 *)(param_1 + 0xf98) = 1;
    *(undefined2 *)(param_2 + 0x3208) = 0xdc;
    *(undefined2 *)(param_2 + 0x320a) = 0xdc;
    *(undefined2 *)(param_2 + 0x320c) = 0x96;
    *(short *)(param_2 + 0x320e) = (short)uVar3;
    *(undefined4 *)(param_2 + 0x3214) = uRam00399700;
    *(undefined2 *)(param_2 + 0x31fc) = 200;
    *(undefined2 *)(param_2 + 0x31fe) = 200;
    *(undefined2 *)(param_2 + 0x3200) = 200;
    *(undefined2 *)(param_2 + 0x3202) = 0xd7;
    *(undefined2 *)(param_2 + 0x3204) = 0xa5;
    *(undefined2 *)(param_2 + 0x3206) = 200;
    *(undefined1 *)(param_2 + 0x3262) = 0xdc;
    *(undefined1 *)(param_2 + 0x3263) = 0xdc;
    *(undefined1 *)(param_2 + 0x3264) = 0x96;
    *(undefined1 *)(param_2 + 0x3265) = 100;
    FUN_00375bcc(param_1,uRam00399704);
  }
LAB_00399720:
  puVar4 = puRam00399808;
  if ((int)*(short *)(param_1 + 0x1c) == *(char *)(iVar2 + 9) + -0xd) {
    pfVar9 = (float *)(puRam00399808 + -3);
    *puRam00399808 = *(undefined4 *)(param_1 + 0xfc4);
    fVar11 = *(float *)(param_1 + 0xfc8);
    puVar4[-2] = fVar11 + *(float *)(iVar2 + 0x20);
    puVar4[1] = fVar11 + *(float *)(iVar2 + 0x24);
    puVar4[2] = *(undefined4 *)(param_1 + 0xfcc);
    fVar11 = (float)FUN_00338f60((int)(short)-(*(short *)(param_1 + 0xbe) +
                                              *(short *)(param_1 + 0xfb4)));
    *pfVar9 = *(float *)(param_1 + 0xfc4) + fVar11 * fVar10;
    fVar11 = (float)FUN_002cfca0((int)(short)-(*(short *)(param_1 + 0xbe) +
                                              *(short *)(param_1 + 0xfb4)));
    puVar4[-1] = *(float *)(param_1 + 0xfcc) + fVar11 * fVar10;
    *(short *)(param_1 + 0xfb4) = *(short *)(param_1 + 0xfb4) + 0xe9;
  }
  return;
}
