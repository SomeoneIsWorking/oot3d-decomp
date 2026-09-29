// OoT3D decomp @ 00444ce0  name=FUN_00444ce0  size=248

void FUN_00444ce0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [4];
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;

  iVar2 = DAT_00444de4;
  uVar3 = *(undefined4 *)(DAT_00444de4 + 4);
  uVar1 = (uint)(ushort)((*(ushort *)(DAT_00444dd8 + 0x8a) & *DAT_00444ddc) >> *DAT_00444de0);
  iVar4 = uVar1 - 1;
  if (uVar1 == 0) {
    local_20 = DAT_00444de8;
  }
  else {
    local_48[0] = *DAT_00444dec;
    local_48[1] = DAT_00444dec[1];
    local_48[2] = DAT_00444dec[2];
    local_48[3] = DAT_00444dec[3];
    uStack_38 = DAT_00444dec[4];
    local_34 = DAT_00444dec[5];
    uStack_30 = DAT_00444dec[6];
    uStack_2c = DAT_00444dec[7];
    uStack_28 = DAT_00444dec[8];
    uStack_24 = DAT_00444dec[9];
    local_4c = *(undefined4 *)(DAT_00444df0 + 0x14);
    local_50 = *(undefined4 *)(DAT_00444df0 + 0x10);
    if (uVar1 == 3) {
      if (*(char *)(DAT_00444dd8 + 0x52) == '\0') {
        if (((uint)*(ushort *)(DAT_00444dd8 + 0xb6) & *(uint *)(DAT_00444df4 + 0xc)) != 0) {
          iVar4 = 3;
        }
      }
      else {
        iVar4 = 4;
      }
    }
    FUN_002fc40c(uVar3,local_48 + iVar4 * 2,&local_50,1,0x23);
    local_20 = DAT_00444dfc;
    if (*(char *)(DAT_00444df8 + 0x56f) == -1) {
      local_20 = DAT_00444e00;
    }
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  FUN_002fcdec(uVar3,&local_20,1,0x23);
  return;
}
