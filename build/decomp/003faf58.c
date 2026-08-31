// OoT3D decomp @ 003faf58  name=FUN_003faf58  size=828

int FUN_003faf58(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int aiStack_100 [18];
  undefined1 auStack_b8 [72];
  int iStack_70;
  int iStack_6c;
  undefined2 uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;

  uVar4 = uRam003fb294;
  param_1[1] = param_2;
  param_1[2] = 0;
  *param_1 = uVar4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  iVar1 = func_0x00313d58(param_1 + 6);
  iVar1 = func_0x00313cec(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x38) = 0;
  iVar1 = func_0x004094a8(iVar1 + 0x3c);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x420) = 0;
  *(undefined4 *)(iVar1 + 0x424) = 0;
  *(undefined4 *)(iVar1 + 0x428) = 0;
  uVar4 = uRam003fb298;
  *(undefined4 *)(iVar1 + 4) =
       *(undefined4 *)(**(int **)(*(int *)(*(int *)(iVar1 + -0x5c) + 4) + 0xc) + 8);
  iVar2 = (int)*(short *)(**(int **)(*(int *)(*(int *)(iVar1 + -0x5c) + 4) + 0xc) + 0xe);
  *(int *)(iVar1 + 8) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(iVar1 + 8) = 1;
  }
  iVar2 = *(int *)(iVar1 + 4);
  puVar3 = (undefined4 *)
           (**(code **)(*(int *)*puRam003fb29c + 0xc))
                     ((int *)*puRam003fb29c,iVar2 * 0x18 + 8,uVar4,0x5b);
  uVar4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = iVar2;
    *puVar3 = 0x18;
    uVar4 = func_0x00350820(puVar3 + 2,uRam003fb2a0,0x18,iVar2);
  }
  *(undefined4 *)(iVar1 + -4) = uVar4;
  iVar10 = 0;
  iVar2 = 0;
  piStack_28 = *(int **)(*(int *)(*(int *)(iVar1 + -0x5c) + 4) + 8);
  if (0 < *(int *)(*piStack_28 + 8)) {
    do {
      iVar11 = *piStack_28;
      iStack_60 = piStack_28[3];
      iStack_5c = piStack_28[4];
      iStack_58 = piStack_28[5];
      iStack_54 = piStack_28[6];
      iStack_70 = (uint)*(ushort *)(piStack_28[1] + iVar2 * 2) + iVar11;
      iStack_64 = piStack_28[2];
      iStack_50 = piStack_28[7];
      iStack_4c = piStack_28[8];
      iStack_6c = iStack_70 + 0x108;
      uStack_68 = *(undefined2 *)(iStack_70 + 10);
      uStack_48 = 0;
      iStack_44 = iStack_64;
      iStack_40 = iStack_60;
      iStack_3c = iStack_5c;
      iStack_38 = iStack_58;
      iStack_34 = iStack_54;
      iStack_30 = iStack_50;
      iStack_2c = iStack_4c;
      func_0x00371738(auStack_b8,&iStack_70,0x48);
      func_0x00371738(aiStack_100,auStack_b8,0x48);
      iVar2 = iVar2 + 1;
      iVar10 = iVar10 + (uint)*(ushort *)(aiStack_100[0] + 8);
    } while (iVar2 < *(int *)(iVar11 + 8));
  }
  iVar11 = *(int *)(iVar1 + 4);
  iVar8 = 0;
  iVar2 = 0;
  if (0 < iVar11) {
    do {
      piVar7 = (int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + -0x5c) + 4) + 0xc) + 0x10) +
                      iVar2 * 0xc);
      iVar2 = iVar2 + 1;
      iVar8 = iVar8 + *(int *)(*(int *)(*(int *)(piVar7[2] + 0xc) +
                                       (short)(ushort)*(byte *)(*piVar7 + 2) * 0x1cc) + 8);
    } while (iVar2 < iVar11);
  }
  uVar9 = *(int *)(iVar1 + 8) + 3U & 0xfffffffc;
  iVar2 = uVar9 + iVar10 * 4 + iVar11 * 8 + iVar8 * 4;
  puVar5 = (undefined1 *)
           (**(code **)(*(int *)*puRam003fb2a4 + 0xc))
                     ((int *)*puRam003fb2a4,iVar2,uRam003fb298,0x65);
  *(undefined1 **)(iVar1 + 0x41c) = puVar5;
  *(undefined1 **)(iVar1 + 0x424) = puVar5;
  *(undefined1 **)(iVar1 + 0xc) = puVar5;
  *(undefined1 **)(iVar1 + 0x428) = puVar5 + uVar9;
  *(int *)(iVar1 + 0x420) = iVar2;
  if (0 < (int)*(uint *)(iVar1 + 8)) {
    puVar6 = puVar5 + -1;
    if ((*(uint *)(iVar1 + 8) & 1) != 0) {
      *puVar5 = 1;
      puVar6 = puVar5;
    }
    for (iVar2 = *(int *)(iVar1 + 8) >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar6[1] = 1;
      puVar6 = puVar6 + 2;
      *puVar6 = 1;
    }
  }
  iVar10 = *(int *)(iVar1 + 0x428) + iVar10 * 4;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x428);
  *(int *)(iVar1 + 0x18) = iVar10;
  iVar2 = *(int *)(iVar1 + 4) * 4;
  iVar10 = iVar10 + iVar2;
  iVar2 = iVar10 + iVar2;
  *(int *)(iVar1 + 0x20) = iVar10;
  *(int *)(iVar1 + 0x428) = iVar2;
  if (0 < iVar8) {
    *(int *)(iVar1 + 0x428) = iVar2 + iVar8 * 4;
    *(int *)(iVar1 + 0x28) = iVar2;
  }
  *(int *)(iVar1 + -0x3c) = iVar1 + -0x48;
  return iVar1 + -0x60;
}
