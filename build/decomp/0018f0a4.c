// OoT3D decomp @ 0018f0a4  name=FUN_0018f0a4  size=916

/* WARNING: Type propagation algorithm not settling */

void FUN_0018f0a4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  int local_290 [3];
  float *pfStack_284;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  float local_3c [3];
  float local_30;
  float fStack_2c;
  float local_28;

  uVar1 = DAT_0018f414;
  if (*(short *)(param_1 + 0x1c) == 0) {
    if (*(short *)(DAT_0018f408 + 0xe8) < 100) {
LAB_0018f0f8:
      FUN_00372d4c(DAT_0018f414,DAT_0018f40c,param_1 + 0xbc,DAT_0018f410);
      FUN_00372f38(param_1,param_2,0);
      local_290[0] = param_1 + 0x5d0;
      local_290[1] = 0x12;
      FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228);
      FUN_0035c358(param_1 + 0xcac,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,0);
      uVar2 = DAT_0018f418;
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_0018f418,uVar1,uVar4,uVar1,param_1 + 0x1a4,0,1);
      FUN_00350820(local_290 + 2,DAT_0018f41c,0x24,0x10);
      local_48 = (undefined1)DAT_0018f420;
      local_47 = (undefined1)((uint)DAT_0018f420 >> 8);
      local_40 = SUB41(DAT_0018f424,0);
      local_3f = (undefined1)((uint)DAT_0018f424 >> 8);
      local_46 = (undefined1)((uint)DAT_0018f420 >> 0x10);
      local_45 = (undefined1)((uint)DAT_0018f420 >> 0x18);
      local_3e = (undefined1)((uint)DAT_0018f424 >> 0x10);
      local_3d = (undefined1)((uint)DAT_0018f424 >> 0x18);
      local_3c[0] = DAT_0018f424;
      local_3c[1] = 8.40779e-45;
      local_30 = (float)CONCAT31(local_30._1_3_,3);
      local_28 = (float)CONCAT31(local_28._1_3_,0x16);
      local_3c[2] = 0.0;
      local_44 = local_48;
      local_43 = local_47;
      local_42 = local_46;
      local_41 = local_45;
      FUN_00350660(param_2,local_290,1,0,0,local_290 + 1);
      pfVar3 = DAT_0018f428;
      *(int *)(param_1 + 0xc10) = local_290[0];
      local_3c[0] = *pfVar3;
      local_3c[1] = pfVar3[1];
      local_3c[2] = pfVar3[2];
      local_30 = pfVar3[3];
      fStack_2c = pfVar3[4];
      local_28 = pfVar3[5];
      iVar5 = 0;
      do {
        iVar6 = param_1 + iVar5 * 0x58 + 0x97c;
        FUN_00353dd0(param_2,iVar6);
        FUN_00353d24(param_2,iVar6,param_1,local_3c[iVar5]);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 6);
      *(undefined4 *)(param_1 + 0x99c) = DAT_0018f42c;
      *(undefined4 *)(param_1 + 0x9f4) = DAT_0018f430;
      *(undefined1 *)(param_1 + 0xa40) = 9;
      *(undefined1 *)(param_1 + 0xa5a) = 0xd;
      *(undefined1 *)(param_1 + 0xa58) = 2;
      *(undefined4 *)(param_1 + 0xa4c) = DAT_0018f434;
      uVar4 = FUN_0035011c(2);
      FUN_00350318(param_1 + 0xa0,uVar4,DAT_0018f438);
      FUN_00350eb8(param_2);
      FUN_00350d48(param_2,param_1 + 0xb8c,param_1,DAT_0018f43c,param_1 + 0xbac);
      local_3c[2] = DAT_0018f444;
      pfStack_284 = &fStack_2c;
      *(undefined2 *)(DAT_0018f440 + param_1) = 0;
      *(undefined1 *)(param_1 + 0xca4) = 0;
      local_3c[1] = *(float *)(param_1 + 0x28);
      local_3c[2] = *(float *)(param_1 + 0x2c) + local_3c[2];
      local_30 = *(float *)(param_1 + 0x30);
      local_290[2] = 1;
      local_290[1] = 1;
      local_290[0] = 0;
      FUN_00369f9c(param_2 + 0xa98,param_1 + 0x28,local_3c + 1,param_1 + 0xc1c,&local_28,0);
      if (*(short *)(param_1 + 0x1c) == 0) {
        FUN_00347dd4(DAT_0018f47c,uVar2,param_1);
      }
      else {
        FUN_00347dd4(DAT_0018f448,uVar2,param_1);
      }
      iVar5 = DAT_0018f480;
      *(undefined4 *)(param_1 + 0x70) = uVar1;
      *(undefined2 *)(iVar5 + param_1) = *(undefined2 *)(param_1 + 0x36);
      *(undefined4 *)(param_1 + 0x978) = DAT_0018f484;
      return;
    }
  }
  else if ((int)*(short *)(DAT_0018f408 + 0xe8) < *(short *)(param_1 + 0x1c) * 10)
  goto LAB_0018f0f8;
  FUN_00374428(param_1);
  return;
}
