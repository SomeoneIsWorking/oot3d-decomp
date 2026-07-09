// OoT3D decomp @ 0033cb90  name=FUN_0033cb90  size=692

void FUN_0033cb90(int *param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_3c;
  undefined1 local_38;
  
  fVar2 = fRam0033ce6c;
  fVar1 = fRam0033ce68;
  iVar5 = 0;
  iVar4 = *param_1;
  iVar6 = *(int *)(param_1[1] + 4);
  uVar8 = *(undefined4 *)(iVar4 + 0x1c);
  uVar9 = *(undefined4 *)(iVar4 + 0x20);
  uVar10 = *(undefined4 *)(iVar4 + 0x24);
  uVar11 = *(undefined4 *)(iVar4 + 0x28);
  uVar12 = *(undefined4 *)(iVar4 + 0x2c);
  *(undefined4 *)(param_3 + 0x8c) = *(undefined4 *)(iVar4 + 0x18);
  *(undefined4 *)(param_3 + 0x90) = uVar8;
  *(undefined4 *)(param_3 + 0x94) = uVar9;
  *(undefined4 *)(param_3 + 0x80) = uVar10;
  *(undefined4 *)(param_3 + 0x84) = uVar11;
  *(undefined4 *)(param_3 + 0x88) = uVar12;
  fVar3 = fRam0033ce70;
  *(short *)(param_3 + 0x1a2) = (short)(int)(*(float *)(*param_1 + 0x30) * fVar1);
  *(float *)(param_3 + 0x144) = *(float *)(*param_1 + 0x3c) * fVar2;
  *(undefined4 *)(param_3 + 0xd0) = *(undefined4 *)(*param_1 + 0x44);
  if (0 < iVar6) {
    do {
      iVar4 = param_1[1];
      if (iVar5 < *(int *)(iVar4 + 4)) {
        iVar4 = iVar4 + *(int *)(iVar4 + 8 + iVar5 * 4);
      }
      else {
        iVar4 = 0;
      }
      switch(*(undefined1 *)(iVar4 + 4)) {
      case 1:
        if (*(short *)(iVar4 + 8) != 0) {
          local_3c = *(short *)(iVar4 + 8) + iVar4;
          local_38 = 0;
          uVar8 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
          fVar7 = (float)FUN_003087a4(uVar8,&local_3c);
          *(float *)(param_3 + 0x8c) = fVar7 * fVar3;
        }
        if (*(short *)(iVar4 + 10) != 0) {
          local_3c = *(short *)(iVar4 + 10) + iVar4;
          local_38 = 0;
          uVar8 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
          fVar7 = (float)FUN_003087a4(uVar8,&local_3c);
          *(float *)(param_3 + 0x90) = fVar7 * fVar3;
        }
        if (*(short *)(iVar4 + 0xc) != 0) {
          local_3c = *(short *)(iVar4 + 0xc) + iVar4;
          local_38 = 0;
          uVar8 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
          fVar7 = (float)FUN_003087a4(uVar8,&local_3c);
          *(float *)(param_3 + 0x94) = fVar7 * fVar3;
        }
        break;
      case 2:
        if (*(short *)(iVar4 + 8) != 0) {
          local_3c = *(short *)(iVar4 + 8) + iVar4;
          local_38 = 0;
          uVar8 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
          fVar7 = (float)FUN_003087a4(uVar8,&local_3c);
          *(float *)(param_3 + 0x80) = fVar7 * fVar3;
        }
        if (*(short *)(iVar4 + 10) != 0) {
          local_3c = *(short *)(iVar4 + 10) + iVar4;
          local_38 = 0;
          uVar8 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
          fVar7 = (float)FUN_003087a4(uVar8,&local_3c);
          *(float *)(param_3 + 0x84) = fVar7 * fVar3;
        }
        if (*(short *)(iVar4 + 0xc) != 0) {
          local_3c = *(short *)(iVar4 + 0xc) + iVar4;
          local_38 = 0;
          uVar8 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
          fVar7 = (float)FUN_003087a4(uVar8,&local_3c);
          *(float *)(param_3 + 0x88) = fVar7 * fVar3;
        }
        break;
      case 3:
        if (*(short *)(iVar4 + 8) != 0) {
          local_3c = *(short *)(iVar4 + 8) + iVar4;
          local_38 = 0;
          uVar8 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
          fVar7 = (float)FUN_003087a4(uVar8,&local_3c);
          *(short *)(param_3 + 0x1a2) = (short)(int)(fVar7 * fVar1);
        }
        break;
      case 7:
        if (*(short *)(iVar4 + 8) != 0) {
          local_3c = *(short *)(iVar4 + 8) + iVar4;
          local_38 = 0;
          uVar8 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
          fVar7 = (float)FUN_003087a4(uVar8,&local_3c);
          *(float *)(param_3 + 0x144) = fVar7 * fVar2;
        }
        break;
      case 8:
        if (*(short *)(iVar4 + 8) != 0) {
          local_3c = *(short *)(iVar4 + 8) + iVar4;
          local_38 = 0;
          uVar8 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
          uVar8 = FUN_003087a4(uVar8,&local_3c);
          *(undefined4 *)(param_3 + 0xd0) = uVar8;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  return;
}

