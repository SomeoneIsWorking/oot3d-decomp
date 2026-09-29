// OoT3D decomp @ 0032c8e0  name=FUN_0032c8e0  size=456

void FUN_0032c8e0(int param_1,int param_2)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;

  uVar1 = DAT_0032cab0;
  uVar5 = DAT_0032caac;
  if (*(short *)(param_1 + 0x8fe) != 0) {
    local_34 = *(undefined4 *)(param_1 + 0x914);
    fVar6 = *(float *)(param_1 + 0x90c) * DAT_0032caa8;
    local_44 = *(undefined4 *)(param_1 + 0x910);
    local_24 = *(undefined4 *)(param_1 + 0x918);
    local_48 = 0;
    local_4c = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_50 = 0x3f800000;
    local_3c = 0x3f800000;
    local_28 = 0x3f800000;
    sVar2 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(DAT_0032cab4 + param_2) * 4 + 0xa54));
    fVar4 = (float)VectorSignedToFloat((int)(short)(sVar2 + -0x8000),(byte)(in_fpscr >> 0x15) & 3);
    FUN_003735e8(fVar4 * DAT_0032cab8,&local_50,1);
    iVar3 = FUN_003695f8();
    if (iVar3 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x8ec) + 0xc) = uVar5;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x8ec) + 0xc) = uVar1;
    }
    FUN_00373bec(*(undefined4 *)(param_1 + 0x8ec));
    uVar1 = DAT_0032cabc;
    iVar3 = param_1 + 0x8e4;
    if (*(short *)(param_1 + 0x8fe) < 0x1e) {
      FUN_00336f54(fVar6,fVar6,fVar6,uVar5,iVar3);
      FUN_00357ef8(uVar5,uVar5,uVar1,fVar6,iVar3);
      FUN_00371348(DAT_0032cac8 + *(float *)(param_1 + 0x90c) * DAT_0032cac4,
                   (DAT_0032cac0 - *(float *)(param_1 + 0x90c)) + DAT_0032cac0,&local_50,1);
    }
    else {
      FUN_00357ef8(DAT_0032cabc,DAT_0032cabc,DAT_0032cabc,fVar6,iVar3);
      uVar5 = *(undefined4 *)(param_1 + 0x90c);
      FUN_00371348(uVar5,uVar5,uVar5,&local_50,1);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x8e4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x8e4),&local_50);
    FUN_00372170(*(undefined4 *)(param_1 + 0x8e4),0);
  }
  return;
}
