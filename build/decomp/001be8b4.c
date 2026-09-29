// OoT3D decomp @ 001be8b4  name=FUN_001be8b4  size=668

void FUN_001be8b4(int param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float local_40;
  float local_3c;
  float local_38;

  iVar9 = *(int *)(DAT_001beb50 + param_2);
  if ((((DAT_001beb54 < *(int *)(param_1 + 0x98)) && ((*(byte *)(param_1 + 0x6bc) & 2) == 0)) &&
      ((*(byte *)(param_1 + 0x6bd) & 2) == 0)) && ((*(byte *)(param_1 + 0x714) & 2) == 0))
  goto LAB_001be9f0;
  if (DAT_001beb54 < *(int *)(param_1 + 0x98)) {
    iVar7 = *(int *)(param_1 + 0x6b0);
    bVar10 = iVar7 != iVar9;
    if (bVar10) {
      iVar7 = *(int *)(param_1 + 0x6b4);
    }
    bVar11 = iVar7 != iVar9;
    if (bVar10 && bVar11) {
      iVar7 = *(int *)(param_1 + 0x708);
    }
    if ((!bVar10 || !bVar11) || iVar7 == iVar9) goto LAB_001be938;
  }
  else {
LAB_001be938:
    sVar3 = *(short *)(param_1 + 0x36);
    iVar7 = *(int *)(param_1 + 0x6b0);
    if ((*(ushort *)(param_1 + 0x1c) & 0x80) == 0) {
      sVar3 = *(short *)(param_1 + 0x92);
    }
    uVar1 = *(undefined1 *)(iVar9 + 0x2488);
    bVar10 = iVar7 != iVar9;
    if (bVar10) {
      iVar7 = *(int *)(param_1 + 0x6b4);
    }
    bVar11 = iVar7 != iVar9;
    if (bVar10 && bVar11) {
      iVar7 = *(int *)(param_1 + 0x708);
    }
    if ((((bVar10 && bVar11) && iVar7 != iVar9) &&
        (cVar2 = *(char *)(DAT_001beb58 + iVar9), cVar2 < '\x01')) &&
       (*(undefined1 *)(iVar9 + 0x2488) = 0, -0x28 < cVar2)) {
      (**(code **)(DAT_001beb5c + param_2))(param_2,0xfffffffc);
    }
    FUN_00374bb8(DAT_001beb60,DAT_001beb60,param_2,param_1,(int)sVar3);
    *(undefined1 *)(iVar9 + 0x2488) = uVar1;
  }
  *(byte *)(param_1 + 0x6bc) = *(byte *)(param_1 + 0x6bc) & 0xfd;
  *(byte *)(param_1 + 0x6bd) = *(byte *)(param_1 + 0x6bd) & 0xfd;
  *(byte *)(param_1 + 0x714) = *(byte *)(param_1 + 0x714) & 0xfd;
  *(undefined4 *)(param_1 + 0x708) = 0;
  *(undefined4 *)(param_1 + 0x6b4) = 0;
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  *(undefined2 *)(param_1 + 0x62c) = 0x1e;
LAB_001be9f0:
  uVar6 = DAT_001beb6c;
  uVar5 = DAT_001beb68;
  uVar4 = DAT_001beb64;
  if (*(short *)(param_1 + 0x62c) != 0) {
    iVar7 = 0;
    *(short *)(param_1 + 0x62c) = *(short *)(param_1 + 0x62c) + -1;
    do {
      iVar8 = (int)*(short *)(param_1 + 0x62c) + iVar7 * 2;
      if ((iVar8 / 4) * 4 - iVar8 == 0) {
        fVar12 = (float)FUN_003738a8(uVar4);
        local_40 = (float)FUN_003738a8(uVar5);
        local_40 = local_40 + *(float *)(param_1 + 0x28);
        local_3c = (float)FUN_003738a8(uVar6);
        local_3c = local_3c + *(float *)(iVar9 + 0x2c);
        local_38 = (float)FUN_003738a8(uVar5);
        local_38 = local_38 + *(float *)(param_1 + 0x30);
        FUN_0036e78c(param_2,&local_40,DAT_001beb70 + -4,DAT_001beb70,0x8a,
                     (int)(short)((short)iVar7 * 0x4000 + (short)(int)fVar12 + 0x2000),6,0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    FUN_00375bcc(param_1,DAT_001beb74);
  }
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  FUN_0037632c(param_1);
  iVar9 = param_2 + 0x5c78;
  FUN_00376168(param_2,iVar9,param_1 + 0x6ac);
  FUN_003761f0(param_2,iVar9,param_1 + 0x6ac);
  if ((*(ushort *)(param_1 + 0x1c) & 0x80) == 0) {
    return;
  }
  FUN_003761f0(param_2,iVar9,param_1 + 0x704);
  return;
}
