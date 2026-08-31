// OoT3D decomp @ 003f9b5c  name=FUN_003f9b5c  size=572

void FUN_003f9b5c(int *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;

  fStack_44 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(*param_2 + 0xa8),(byte)(in_fpscr >> 0x15) & 3);
  fStack_44 = fStack_44 * fRam003f9d98;
  fStack_40 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(*param_2 + 0xa9),(byte)(in_fpscr >> 0x15) & 3);
  fStack_40 = fStack_40 * fRam003f9d98;
  fStack_3c = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(*param_2 + 0xaa),(byte)(in_fpscr >> 0x15) & 3);
  fStack_3c = fStack_3c * fRam003f9d98;
  fStack_38 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(*param_2 + 0xab),(byte)(in_fpscr >> 0x15) & 3);
  fStack_38 = fStack_38 * fRam003f9d98;
  uStack_34 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(*param_2 + 0xa4),(byte)(in_fpscr >> 0x15) & 3);
  uStack_34 = uStack_34 * fRam003f9d98;
  fStack_30 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(*param_2 + 0xa5),(byte)(in_fpscr >> 0x15) & 3);
  fStack_30 = fStack_30 * fRam003f9d98;
  uStack_2c = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(*param_2 + 0xa6),(byte)(in_fpscr >> 0x15) & 3);
  uStack_2c = uStack_2c * fRam003f9d98;
  fStack_28 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(*param_2 + 0xa7),(byte)(in_fpscr >> 0x15) & 3);
  fStack_28 = fStack_28 * fRam003f9d98;
  uVar2 = func_0x00314870(param_1 + 6);
  iVar3 = param_1[0x1f];
  param_1[0x1f] = iVar3 + 1;
  *(undefined4 *)(param_1[0x1e] + iVar3 * 4) = uVar2;
  func_0x0031485c(param_1 + 9,&fStack_44);
  uStack_2c = 0.0;
  fStack_28 = 0.0;
  iVar3 = 0;
  uStack_34 = 0.0;
  fStack_30 = 0.0;
  do {
    if (iVar3 < *(int *)(*param_2 + 0x120)) {
      iVar4 = param_2[2] + *(short *)(*param_2 + iVar3 * 2 + 0x124) * 0x28;
      func_0x003146e4(param_1 + 9,iVar3,iVar4);
      uVar1 = func_0x003146d0(*(undefined2 *)(iVar4 + 8));
      *(undefined1 *)((int)&uStack_2c + iVar3) = uVar1;
      uVar1 = func_0x003146d0(*(undefined2 *)(iVar4 + 10));
      *(undefined1 *)((int)&uStack_34 + iVar3) = uVar1;
    }
    else {
      func_0x0031466c(param_1 + 9,iVar3);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  func_0x00409428(param_1 + 9,(int)&uStack_2c + 1,(int)&uStack_34 + 1);
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = (uint)*(byte *)((int)param_1 + 0x16);
  *(undefined2 *)(param_1 + 0x114) = 0;
  *(undefined2 *)((int)param_1 + 0x452) = 0;
  *(undefined2 *)(param_1 + 0x115) = 0;
  FUN_003fa198(param_1,param_2,param_3);
  func_0x003145d0(param_1 + 9,(short)param_1[0x114],*(undefined2 *)((int)param_1 + 0x452),
                  (short)param_1[0x115]);
  func_0x003f9f68(param_1,param_2,param_3);
  func_0x0031459c(param_1 + 9,param_1 + 0x11a);
  func_0x00314538(param_1 + 9,param_1 + 0x116);
                    /* WARNING: Could not recover jumptable at 0x003f9d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  return;
}
