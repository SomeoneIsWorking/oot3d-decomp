// OoT3D decomp @ 0018c614  name=FUN_0018c614  size=792

void FUN_0018c614(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  uint in_fpscr;
  
  uVar1 = uRam0018c920;
  FUN_00372d4c(uRam0018c920,uRam0018c918,param_1 + 0xbc,uRam0018c91c);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(iRam0018c924 + iVar3) != 0)
     ) {
    iVar3 = iVar3 + 0x3a5c;
  }
  else {
    iVar3 = 0;
  }
  uVar4 = FUN_00358ef8(iVar3 + 0x10,0);
  FUN_00353e78(iVar3 + 0x10,param_2,param_1 + 0x1a4,uVar4,*(undefined4 *)(param_1 + 0x178),
               0xffffffff,0,0,0);
  FUN_0035c358(param_1 + 0x228,param_1 + 0x1a4,0,1,0xffffffff);
  *(undefined2 *)(param_1 + 0x47a) = 1;
  FUN_00353dd0(param_2,param_1 + 0x3f8);
  FUN_00353d24(param_2,param_1 + 0x3f8,param_1,uRam0018c928);
  uVar4 = FUN_0035011c(0x16);
  FUN_00350318(param_1 + 0xa0,uVar4,uRam0018c92c);
  puVar2 = puRam0018c940;
  puVar8 = puRam0018c93c;
  uVar7 = uRam0018c938;
  uVar4 = uRam0018c934;
  if (*(int *)(iRam0018c930 + 4) != 1) {
    if ((*(ushort *)(iRam0018c930 + 0xeee) & 0x100) == 0) {
      iVar3 = (int)*(short *)(param_2 + 0x104);
      if (iVar3 == 0x36) {
        uVar5 = *(uint *)(iRam0018c930 + 0x10);
        bVar9 = uVar5 == 0;
        if (bVar9) {
          uVar5 = (uint)*(ushort *)(param_1 + 0xc0);
        }
        if (bVar9 && uVar5 == 5) {
          puVar8 = puRam0018c940 + 8;
          uVar6 = FUN_0036ae14(param_1 + 0x1a4,puRam0018c940[8]);
          uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00375c08(uVar4,uVar1,uVar6,puVar2[0xb],param_1 + 0x1a4,*puVar8,
                       *(undefined *)(puVar2 + 10));
          *(undefined4 *)(param_1 + 0x3f4) = uVar7;
LAB_0018c8d8:
          FUN_00376340(uVar1,uVar1,uVar1,param_2,param_1,4);
          FUN_0037572c(uRam0018c94c,param_1);
          *(undefined *)(param_1 + 0x1f) = 6;
          *(undefined2 *)(param_1 + 0x450) = 0;
          return;
        }
      }
      else {
        bVar9 = iVar3 == 99;
        if (bVar9) {
          iVar3 = *(int *)(iRam0018c930 + 0x10);
        }
        bVar10 = bVar9 && iVar3 == 1;
        if (bVar9 && iVar3 == 1) {
          bVar10 = *(short *)(param_1 + 0xc0) == 6;
        }
        if (bVar10) {
          uVar7 = FUN_0036ae14(param_1 + 0x1a4,puRam0018c940[0xc]);
          uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00375c08(uVar4,uVar1,uVar7,puVar8[3],param_1 + 0x1a4,*puVar8,
                       *(undefined *)(puVar8 + 2));
          *(undefined4 *)(param_1 + 0x3f4) = uRam0018c944;
          goto LAB_0018c8d8;
        }
      }
    }
    else if (*(short *)(param_2 + 0x104) == 99) {
      iVar3 = (int)*(short *)(param_1 + 0xc0);
      if (iVar3 == 7) {
        if (*(int *)(iRam0018c930 + 0x10) != 0) goto FUN_00374428;
      }
      else {
        bVar9 = iVar3 != 8;
        if (!bVar9) {
          iVar3 = *(int *)(iRam0018c930 + 0x10);
        }
        if (bVar9 || iVar3 != 1) goto FUN_00374428;
      }
      if ((*(ushort *)(iRam0018c948 + 0x20) & 0x2000) == 0) {
        uVar6 = FUN_0036ae14(param_1 + 0x1a4,puRam0018c940[0xc]);
        uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar4,uVar1,uVar6,puVar8[3],param_1 + 0x1a4,*puVar8,*(undefined *)(puVar8 + 2))
        ;
      }
      else {
        uVar6 = FUN_0036ae14(param_1 + 0x1a4,*puRam0018c940);
        uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar4,uVar1,uVar6,puVar2[3],param_1 + 0x1a4,*puVar2,*(undefined *)(puVar2 + 2))
        ;
      }
      *(undefined4 *)(param_1 + 0x3f4) = uVar7;
      goto LAB_0018c8d8;
    }
  }
FUN_00374428:
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}

