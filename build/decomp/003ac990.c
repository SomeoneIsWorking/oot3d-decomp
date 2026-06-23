// OoT3D decomp @ 003ac990  name=FUN_003ac990  size=940

void FUN_003ac990(int param_1,int param_2)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  
  iVar3 = param_2 + 0x3a58;
  iVar4 = FUN_00373074(iVar3,(int)*(char *)(param_1 + 0x22f));
  if ((((iVar4 != 0) && (iVar4 = FUN_00373074(iVar3,(int)*(char *)(param_1 + 0x22e)), iVar4 != 0))
      && (iVar4 = FUN_00373074(iVar3,(int)*(char *)(param_1 + 0x22d)), iVar4 != 0)) &&
     (iVar3 = FUN_00373074(iVar3,(int)*(char *)(param_1 + 0x22c)), iVar3 != 0)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
    bVar1 = *(byte *)(param_1 + 0x22e);
    *(byte *)(param_1 + 0x1e) = bVar1;
    iVar3 = DAT_003acd40;
    if ((bVar1 < 0x13) &&
       (iVar4 = param_2 + (uint)bVar1 * 0x80, *(int *)(DAT_003acd3c + iVar4) != 0)) {
      iVar4 = iVar4 + 0x3a5c;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = FUN_00358ef8(iVar4 + 0x10,
                         *(undefined4 *)
                          (DAT_003acd44 +
                           (uint)*(byte *)((*(ushort *)(param_1 + 0x1c) & 0xff) * 0xb + DAT_003acd40
                                          + 6) * 8 + 4));
    *(undefined4 *)(param_1 + 0xc98) = uVar5;
    FUN_00353e78(iVar4 + 0x10,param_2,param_1 + 0x1a4,uVar5,*(undefined4 *)(param_1 + 0x178),0,
                 param_1 + 0x2c8,param_1 + 0x6a4,0x13);
    iVar3 = DAT_003acd48 +
            (uint)*(byte *)(iVar3 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 0xb) * 0x10;
    iVar4 = *(int *)(iVar3 + 8);
    if (*(int *)(iVar3 + 4) != -1) {
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc));
    }
    if (iVar4 != -1) {
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),iVar4);
    }
    FUN_0035c358(param_1 + 0xacc,param_1 + 0x1a4,*(undefined4 *)(iVar3 + 0xc),0xffffffff,0xffffffff)
    ;
    uVar5 = DAT_003acd54;
    FUN_00372d4c(DAT_003acd54,DAT_003acd4c,param_1 + 0xbc,DAT_003acd50);
    FUN_00353dd0(param_2,param_1 + 0x230);
    FUN_00353d24(param_2,param_1 + 0x230,param_1,DAT_003acd58);
    FUN_00350318(param_1 + 0xa0,0,DAT_003acd5c);
    puVar2 = DAT_003acd64;
    iVar3 = DAT_003acd60;
    uVar9 = *(ushort *)(param_1 + 0x1c) & 0xff;
    if (uVar9 == 7) {
      if ((*(int *)(DAT_003acd60 + 4) == 0) &&
         ((*(uint *)(DAT_003acd60 + 0xbc) & *DAT_003acd64) == 0)) {
        if (*(short *)(param_1 + 0xc0) != 1) {
LAB_003acb9c:
          FUN_00374428(param_1);
          return;
        }
      }
      else if (*(short *)(param_1 + 0xc0) != 0) goto LAB_003acb9c;
    }
    if (uVar9 == 5) {
      *(byte *)(param_1 + 0x242) = *(byte *)(param_1 + 0x242) | 0x40;
    }
    iVar4 = DAT_003acd6c;
    if (*(int *)(iVar3 + 4) == 0) {
      if ((*(uint *)(iVar3 + 0xbc) & *puVar2) == 0) {
        uVar6 = 3;
      }
      else {
        uVar6 = 4;
      }
    }
    else {
      uVar6 = *(uint *)(iVar3 + 0xbc) & puVar2[0x12];
      if (uVar6 != 0) {
        if ((*(ushort *)(DAT_003acd68 + 0xf4) & 1) == 0) {
          uVar6 = 1;
        }
        else {
          uVar6 = 2;
        }
      }
    }
    iVar10 = uVar9 * 5 + DAT_003acd6c;
    *(short *)(param_1 + 0x2b6) = (short)uVar6;
    FUN_003717ac(param_1 + 0x1a4,iVar4 + -0x348,*(undefined *)((short)uVar6 + iVar10));
    uVar8 = DAT_003acd70;
    *(bool *)(param_1 + 0x225) =
         *(char *)((int)*(short *)(param_1 + 0x2b6) +
                  (*(ushort *)(param_1 + 0x1c) & 0xff) * 5 + iVar4) == '\x14';
    FUN_0037572c(uVar8,param_1);
    puVar7 = (undefined *)(DAT_003acd74 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 0xc);
    *(undefined *)(param_1 + 0x1f) = *puVar7;
    *(float *)(param_1 + 0x2c0) = *(float *)(puVar7 + 4) + *(float *)(param_1 + 0x270);
    *(undefined4 *)(param_1 + 700) = *(undefined4 *)(puVar7 + 8);
    *(undefined4 *)(param_1 + 0x2c4) = uVar5;
    uVar5 = FUN_00348ff0(param_2,*(ushort *)(param_1 + 0x1c) >> 8,0xff);
    *(undefined4 *)(param_1 + 0x288) = uVar5;
    FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x18,0,0,0,3);
    uVar5 = DAT_003acd7c;
    uVar8 = DAT_003acd80;
    if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 3) {
      if ((*(uint *)(iVar3 + 0xbc) & puVar2[0x12]) == 0) {
        *(float *)(param_1 + 0x274) = *(float *)(param_1 + 0x274) + DAT_003acd78;
        uVar8 = uVar5;
      }
      else {
        FUN_0035c6b0(*(undefined4 *)(param_1 + 0x288),param_1 + 0x28);
        uVar8 = DAT_003acd80;
      }
    }
    *(undefined4 *)(param_1 + 0x228) = uVar8;
  }
  return;
}

