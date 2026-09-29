// OoT3D decomp @ 003ad010  name=FUN_003ad010  size=460

void FUN_003ad010(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint in_fpscr;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;

  uVar4 = uRam003ad1fc;
  uVar3 = uRam003ad1f8;
  uVar2 = uRam003ad1f4;
  uVar1 = uRam003ad1e8;
  iVar8 = *(int *)(iRam003ad1dc + param_2);
  uStack_28 = uRam003ad1e0;
  uStack_24 = uRam003ad1e4;
  uStack_20 = uRam003ad1e8;
  uStack_34 = uRam003ad1ec;
  uStack_30 = uRam003ad1f0;
  uStack_2c = uRam003ad1e8;
  iVar6 = FUN_0036bc98(param_1,param_2);
  if (iVar6 == 0) {
    iVar6 = (int)*(short *)(param_1 + 0x92) - (int)*(short *)(param_1 + 0xbe);
    if (iVar6 < 0) {
      iVar6 = (int)*(short *)(param_1 + 0xbe) - (int)*(short *)(param_1 + 0x92);
    }
    if ((short)iVar6 < iRam003ad214) {
      if (*(float *)(param_1 + 0x2c) <= *(float *)(iVar8 + 0x2c)) {
        FUN_00363cb8(param_1,param_2);
      }
      return;
    }
  }
  else {
    uVar7 = FUN_0036ae18(param_1 + 0x1a4,1);
    uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uRam003ad204,uVar1,uVar7,uRam003ad200,param_1 + 0x1a4,1,3);
    uVar5 = FUN_00367d74(param_2);
    *(undefined2 *)(param_1 + 0x458) = uVar5;
    FUN_00320d7c(param_2,0,1);
    FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0x458),7);
    FUN_00317b28(param_2,(int)*(short *)(param_1 + 0x458),iVar8,0x21);
    *(undefined1 *)(param_2 + 0x3262) = 0xff;
    *(undefined1 *)(param_2 + 0x3263) = 0xff;
    *(undefined1 *)(param_2 + 0x3264) = 0xff;
    *(undefined1 *)(param_2 + 0x3265) = 0x18;
    *(undefined1 *)(param_2 + 0x3261) = 1;
    FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x458),&uStack_28,&uStack_34);
    FUN_00354220(uVar4,param_2,(int)*(short *)(param_1 + 0x458));
    FUN_00338cd8(*puRam003ad208);
    FUN_0034be04(2);
    *(undefined4 *)(iVar8 + 0x28) = uVar2;
    *(undefined4 *)(iVar8 + 0x2c) = uVar3;
    *(undefined4 *)(iVar8 + 0x30) = uVar1;
    *(undefined4 *)(iVar8 + 0x6c) = uVar1;
    *(undefined2 *)(param_1 + 0x452) = 0;
    *(undefined4 *)(param_1 + 0x3f4) = uRam003ad20c;
    FUN_0035c528(uRam003ad210);
  }
  return;
}
